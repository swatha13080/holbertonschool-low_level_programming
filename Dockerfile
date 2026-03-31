FROM ubuntu:22.04

# Avoid interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    gcc \
    git \
    valgrind \
    gdb \
    vim \
    && rm -rf /var/lib/apt/lists/*

# Clone and install Betty
RUN git clone https://github.com/hs-hq/Betty.git /tmp/Betty \
    && cd /tmp/Betty \
    && ./install.sh \
    && rm -rf /tmp/Betty

# Create the betty wrapper script
RUN echo '#!/bin/bash\n\
BIN_PATH="/usr/local/bin"\n\
BETTY_STYLE="betty-style"\n\
BETTY_DOC="betty-doc"\n\
\n\
if [ "$#" = "0" ]; then\n\
    echo "No arguments passed."\n\
    exit 1\n\
fi\n\
\n\
for argument in "$@" ; do\n\
    echo -e "\\n========== $argument =========="\n\
    ${BIN_PATH}/${BETTY_STYLE} "$argument"\n\
    ${BIN_PATH}/${BETTY_DOC} "$argument"\n\
done' > /bin/betty \
    && chmod a+x /bin/betty

# Set working directory
WORKDIR /workspace

# Default shell
CMD ["/bin/bash"]
