struct A{
         int a;float b;char c;
    } ;

float f4(float x) 
{
    struct A m;
   int a;
    m=12;
    m++;
    m.b=17;
    x.a=m.b;
    m.d=m.a.a;
}
