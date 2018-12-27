parse: sol4.lex
	flex sol4.lex
	gcc -o lexer lex.yy.c -L c:\gnuwin32\lib -lfl

clean: 
	rm -f lex.yy.c lexer
