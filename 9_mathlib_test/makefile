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
