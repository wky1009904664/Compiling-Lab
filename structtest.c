struct A {
    int a,b;
   };
int main()  
{
    int r;
    struct A m,n;
    n.a = 1;
    n.b = 2;
    m=n;
    m.a=n.b + m.b * 2;
    r = m.a;
    write(r);
    return 1;
}