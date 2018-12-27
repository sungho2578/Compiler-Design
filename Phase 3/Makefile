parser: mini_l.lex mini_l.y
        bison -v -d --file-prefix=y mini_l.y
	flex --noyywrap mini_l.lex
	g++ -std=c++11 y.tab.c lex.yy.c -L c:\gnuwin32\lib -o parser

clean:
	rm -f parser y.* lex.yy.c *.mil

mil: 	parser
	./parser fibonacci.min > fibonacci.mil
