# CmdUtils

CmdUtils是一个用于查询和执行常用命令的命令行工具。它可以帮助用户快速查找和执行各种命令，提高工作效率。

## 安装

1. 克隆仓库：

```bash
git clone https://github.com/yourusername/CmdUtils.git
```
进入项目目录：
```bash
cd CmdUtils
```
编译项目：
```bash
make
```
将生成的可执行文件cil移动到您的PATH环境变量中的某个目录，例如`/usr/local/bin`：
```bash
sudo mv cil /usr/local/bin/
```
使用
查看可用命令：
```bash
cil 
```
查询特定命令的用法：
```bash
cil <命令名>
```
例如，查询Nginx命令的用法：
```bash
cil nginx
```
支持的命令`Nginx`,`PostgreSQL`,`进程检查`,`可执行文件`,`基础Linux命令`
# 贡献
如果您发现任何错误或想要添加新功能，请随时提交`issue`或`pull request`
# 许可证
CmdUtils采用`MIT`许可证。
