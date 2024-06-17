# CmdUtils
![img](https://img.shields.io/badge/Faster%20use-Linux-red)  ![img](https://img.shields.io/badge/Developed%20by-C-yellow)  ![img](https://img.shields.io/badge/Updata-more-orange)

CmdUtils是一个用于查询和执行常用命令的命令行工具。它可以帮助用户快速查找和执行各种命令，提高工作效率🚡

目前拥有`🚡命令速查`，`🥇集成自动化脚本`，`👩‍🦲一键安装脚本`，`🧮代码统计`等高级功能

**注意仅适用于`linux centos 7.x`**

## 安装
1. linux执行脚本
```bash
curl -O https://heng1.oss-cn-beijing.aliyuncs.com/cil
```
2. 激活环境变量
```bash
vim /etc/profile
export PATH=$PATH:/usr/local/nginx/sbin
source /etc/profile
```
`/usr/local/nginx/sbin`改为您cil所在路径

## 使用
查看可用命令：
```bash
cil 
```
终端输出如下
```bash
用法:cil (<参数>) <命令名>
例如:cil i nginx 安装中间件Nginx
cil * :支持nginx,psql(PostgreSQL),pro(进程检查命令),exe(可执行文件操作),base(基础linux检查)——————提示功能
cil i * :支持nginx,psql,nvm,cloc,gcc,git——————安装功能
cil s * :支持cil(配置全局变量),env,banner,exam,cpu,free,system——————shell功能
cil f * :支持exam(目录检查),info(目录下所有文件检查),nginx,psql——————文件类型检查功能
cil l * :支持exam??????登录自动执行功能
```

## 编译
如果您要修改代码则可修改后编译运行👽
```bash
make
```

# 贡献
🧑如果您发现任何错误或想要添加新功能，请随时提交`issue`或`pull request`
# 许可证
CmdUtils采用`MIT`许可证。
