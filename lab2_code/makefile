
yacc:
	bison syntax.y -d -v --debug

lex:
	flex tokens.l

cc:
	gcc -o syntax lex.yy.c syntax.tab.c tree.c 

build:
	make yacc
	make lex
	make cc

run:
	python3 test.py

clean:
	rm ./lexoutfiles/out*.txt 
	rm ./STtextfile/tree*.txt
	rm syntax.tab.h
	rm syntax.tab.c
	rm syntax.output
	rm syntax
	rm lex.yy.c
