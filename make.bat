cls
flex lex.l
bison  parser.y
g++ -o parser lex.yy.c parser.tab.c ast.c  SemanticAnalysis.cpp
