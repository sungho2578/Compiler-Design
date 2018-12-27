parse: mini_l.lex
	flex mini_l.lex
	gcc -o lexer lex.yy.c -L C:\GnuWin32\lib -lfl

clean: 
	rm -f lex.yy.c lexer
