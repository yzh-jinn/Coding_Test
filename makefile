Compiler = g++
Target = cpp_test
Src = *.cc
Warning = -Wall -g

$(Target): $(Src)
	@$(Compiler) $(Src) -o $(Target)
	
.PHONY : c .
c :
	@rm -f $(Target)
. :
	@./$(Target)
