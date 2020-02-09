FROM gcc
RUN apt-get -y update 
RUN apt-get -y upgrade
RUN apt-get install -y python3-pip
RUN pip3 install atcoder-tools
RUN pip3 install online-judge-tools
RUN git clone https://github.com/pyenv/pyenv.git ~/.pyenv
RUN echo 'export PYENV_ROOT="$HOME/.pyenv"' >> ~/.profile
RUN echo 'export PATH="$PYENV_ROOT/bin:$PATH"' >> ~/.profile
RUN echo 'eval "$(pyenv init -)"' >> ~/.profile
RUN source ~/.profile
RUN pyenv install 3.4.3
RUN pyenv local 3.4.3