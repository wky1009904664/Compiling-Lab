cls
flex lex.l
bison parser.y
gcc -o parser lex.yy.c parser.tab.c ast.c
parser.exe test1.c