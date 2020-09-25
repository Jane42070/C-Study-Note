# C 语言特点
> Linux 开发后，1971 年开发
- 优点
	- 代码量小
	- 执行速度快
	- 功能强大
	- 编程自由
- 缺点
	- 写代码实现周期长
	- 可移植性较差
	- 过于自由，经验不足易出错
	- 对平台库依赖较多
- gcc 编译 4 步骤
	1. 预处理 `gcc -E xxx.c -o xxx.i` 预处理文件
		1. 头文件展开。--- 不检查语法错误。可以展开任意文件
		2. 宏定义替换。将宏名替换为宏值
		3. 替换注释。 替换成空行
		4. 展开条件编译。根据条件来展开指令
	2. 编译 `gcc -S xxx.i -o xxx.s` 汇编文件
		1. 将 c 程序翻译成汇编指令
		2. **在编译过程会逐行去检查语法错误** -- 整个编译步骤中最耗时的过程
		3. 将 c 程序翻译成汇编指令，得到 .s 汇编文件。
	3. 汇编 `gcc xxx.s -c xxx.o` 目标文件（二进制文件）
		1. 翻译：将汇编指令翻译成对应的二进制编码。
	4. 链接	`gcc xxx.o -o xxx.exe` 可执行文件
		1. 数据段合并
		2. 数据地址回填
		3. 库引入