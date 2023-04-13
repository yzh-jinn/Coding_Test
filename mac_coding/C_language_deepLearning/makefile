#----- version 1-----
# mf_ver1 : main.c t1.c
# 	gcc *.c -o mf_ver1

#----- version 2 -----

# CXX = gcc
# Target = mf_ver2
# OBJ = main.o t1.o

# $(Target) : $(OBJ)
# 	$(CXX) $(OBJ) -o $(Target)

# main.o : main.c 
# 	$(CXX) main.c -c

# t1.o : t1.c
# 	$(CXX) t1.c -c


#----- version 3 ------
# Compiler = gcc
# Target = new_mine
# Files = *.o

# $(Target) : $(Files)
# 	$(Compiler) $(Files) -o $(Target)

# %.o : %.c
# 	$(Compiler) *.c -c


#----- version 4 （推荐使用）------
Compiler = gcc
Target = mine3
#Files = main.c t1.c 
ob_Files = main.o t1.o  #(以后有什么文件还可以继续在这里加)

Warning = -Wall -g

#$(Target) : $(Files)
#	$(Compiler)	$(Warning) $^ -o $@
$(Target) : $(ob_Files)
	$(Compiler) $^ -o $@ $(Warning)
%.o : %.c
	$(Compiler) $^ -c -o $@ $(Warning)

.PHONY : oclean cclean
oclean :
	rm -f *.o $(Target)

cclean :
	rm -f *.c $(Target)