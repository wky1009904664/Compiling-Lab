cls
flex lex.l
bison -d -v parser.y
gcc -o parser lex.yy.c parser.tab.c ast.c
parser.exe test.c