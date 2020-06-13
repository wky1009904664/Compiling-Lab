cls
g++ -o parser lex.yy.c parser.tab.c ast.c SemanticAnalysis.cpp
@echo off
echo %1
parser.exe %1