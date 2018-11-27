make:
	bison -d syntax.y
	flex scanner.l
	gcc syntax.tab.c -lfl -ly -lm -o parser
test:
	./parser testcase.c


