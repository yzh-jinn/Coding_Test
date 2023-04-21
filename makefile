Compiler = clang++
Target = cpp_test
Src = *.cc
Warning = -Wall -g

$(Target): $(Src)
	@$(Compiler) $(Src) -o $(Target)
	
.PHONY : clean
clean :
	@rm -f $(Target)
