FROM gcc
RUN apt-get -y update 
RUN apt-get -y upgrade
RUN apt-get install -y python3-pip
RUN pip3 install atcoder-tools
RUN pip3 install online-judge-tools