FROM alpine:latest
RUN apk update && apk add --update --no-cache alpine-sdk libxml2-dev libxslt-dev python3 python3-dev npm
RUN pip3 install atcoder-tools
RUN pip3 install online-judge-tools
RUN npm install -g atcoder-cli