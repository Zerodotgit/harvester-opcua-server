# 莲藕采收机OPC UA服务端
## 安装/运行
### 1.安装依赖

#### 安装open62541库

```bash
git clone https://github.com/open62541/open62541.git
cd open62541/
mkdir build && cd build
cmake ..
make
sudo make install
```  

### 2.编译

```bash
cd harvester-opcua-server/
mkdir build && cd build
cmake ..
make
```  

### 3.运行

```bash
./opcua_server
```  

Then,enjoy!
  