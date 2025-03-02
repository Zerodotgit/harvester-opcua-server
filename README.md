# Lotus Root Harvester OPC UA Server

[简体中文](docs/README_zh_CN.md)

## Installation & Run
### 1. Install dependencies
Install the open62541 library
```bash
git clone https://github.com/open62541/open62541.git
cd open62541/
mkdir build && cd build
cmake ..
make
sudo make install
```
### 2. Compile
```bash
cd harvester-opcua-server/
mkdir build && cd build
cmake ..
make
```
### 3. Launch
```bash
./opcua_server
```
Then,enjoy!