int a,b,c;/*a
bc*/
float m,n;//signle note test
int arr[3];
int fibo(int a) {
    if (a==1 || a==2)
        return 1;
    else
    {
        if(a==3)
            return 2;
    }
    
    return fibo(a-1) + fibo(a-2);
}
struct A{
    int a;
    float b;
};
int main()
{
    int m,n,i,ssf[3];
    int arrr[3][2];
    struct A a;
    char c = 'a';
    arr[a[2]] = 1;
    m = read();
    i = 1;
    i=(m+n)/i;
    ++i;
    i--;
    
    a.b.c = 1;
    while(i<=m)
    {
        n = fibo(i);
        write(n);
        i = i+1;
        //break;
    }
    return i;
}//last line note