// hello.i
%module hello 
%{
#define SWIG_FILE_WITH_INIT
extern void hello();
%}

extern void hello();
