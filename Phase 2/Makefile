parse:
	bison -v -d --file-prefix=y mini_l.y
	flex mini_l.lex
	gcc -o parser y.tab.c lex.yy.c -L C:\GnuWin32\lib -lfl
clean:
	rm -f parser lex.yy.c y.*
