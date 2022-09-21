# 批量 Ping IP

## 编译命令

1. Window  
   `mingw32-make`
2. Linux  
   `make`
      
## 执行

1. Window
   `.\bin\ping-bulk.exe`
2. Linux
   `./bin/ping-bulk`
   
## 执行结果

```shell
E:\c-project\ping-in-bulk>.\bin\ping-in-bulk.exe

ping -n 1 192.168.1.100 > nul
ping -n 1 192.168.1.101 > nul
ping -n 1 192.168.1.102 > nul
ping -n 1 192.168.1.103 > nul
ping -n 1 192.168.1.104 > nul
ping -n 1 192.168.1.105 > nul
ping -n 1 192.168.1.106 > nul

=============================

ping IP successfully:

192.168.1.100
192.168.1.101
192.168.1.102
192.168.1.103
192.168.1.104
192.168.1.105
192.168.1.106

```
