cls
g++ -o parser lex.yy.c parser.tab.c ast.c SemanticAnalysis.cpp
parser.exe test1.c