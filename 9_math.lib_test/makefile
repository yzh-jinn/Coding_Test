#gcc mathlib.c -o mathlib

Compiler = gcc
Src = *.c 
Target = mathlib

$(Target): $(Src)
	@$(Compiler) $(Src) -o $(Target)

.PHONY : c .
c :
	@rm -f $(Target)
. :
	@./$(Target)

#在编译的时候，我们将源文件编译成一个静态库文件（.a文件）或动态库文件（.so或.dll文件），如下所示：
$ gcc -c mathlib.c
$ ar rcs libmathlib.a mathlib.o
# 这里我们将源文件编译成了一个静态库文件 libmathlib.a。其他人只需要使用这个静态库文件和头文件 mathlib.h，就可以调用其中的函数了。他们不需要了解函数的实现细节，因为这些细节已经被封装在库文件中了。

#在使用这个库文件的时候，只需要链接上这个库文件即可，如下所示：
$ gcc -o main main.c -L. -lmathlib
# 其中，-L. 表示将当前目录添加到库文件搜索路径中，-lmathlib 表示链接库文件 libmathlib.a。
# 这样，其他人就可以在自己的代码中使用这个数学库了，而不需要了解其中的实现细节。
