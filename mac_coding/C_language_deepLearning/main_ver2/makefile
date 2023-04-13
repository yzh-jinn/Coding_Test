#依赖文件
#依赖关系
#依赖命令

Compiler = gcc #命令
Target = m2 #文件
#Files = .c #文件
ob_Files = main_2.o #目标文件
err_debug = -Wall -g #命令

$(Target) : $(ob_Files)
	$(Compiler) $^ -o $@ $(Warning)

%.o : %.c
	$(Compiler) -c $^ -o $@ $(err_debug)
# gcc -c main_2.c
# gcc main_2.o -o m2

#c -> o -> Target

.PHONY : oclean cclean

oclean : 
	rm -f *.o $(Target)

cclean :
	rm -f *.c $(Target)