bison -d parser.y
gcc -o parser lex.yy.c parser.tab.c ast.c
