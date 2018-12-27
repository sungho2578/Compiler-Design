parse:
	bison -v -d --file-prefix=y calc.y
	flex calc.lex
	gcc -o calc y.tab.c lex.yy.c -L c:\gnuwin32\lib -lfl
clean:
	rm -f calc y.tab.c lex.yy.c y.output y.tab.*
