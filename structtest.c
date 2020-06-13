struct A {
    char d;
    int a,b;
    char c;
   };
int main()  
{
    int a;
    struct A m,n;
    m=n;
    m.a=n.b;
    return 1;
}