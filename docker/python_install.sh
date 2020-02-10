PYTHON_VERSION=3.4.3

# library install
apk --update --no-cache add --virtual build-temp build-base openssl

# source code
wget "https://www.python.org/ftp/python/${PYTHON_VERSION}/Python-${PYTHON_VERSION}.tgz"
tar xzvf Python-${PYTHON_VERSION}.tgz
cd Python-${PYTHON_VERSION}

# build
./configure
make
make install

# check
python3 -V

# rm
cd ..
rm -r Python-${PYTHON_VERSION}
rm Python-${PYTHON_VERSION}.tgz