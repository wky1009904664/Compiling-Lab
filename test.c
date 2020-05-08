int a,b,c;/*,
     CaseStmtList = 336,
     CaseList = 337*/
float m,n;//printf("Type_id:%s\n",T0->type_id);
int arr[3];
int fibo(int a) {
    if (a==1 || a==2)
        return 1;
    else
    {
        if(a==3)
            return 2;
        //break;
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
    int *a = &b;
    char c = 'a';
    arr[a[2]] = 1;
    m = read();
    i = -1;
    *a = 1;
    i=(m+n)/i;
    ++i;
    i--;
    a.b.c = 1;
    //break;
    while(i<=m)
    {
        n = fibo(i);
        i = i+1;
        if(i==1)
            break;
        else if(i==2){
            write(n);
            continue;
        }
    }
    for(;;)
        a++;
    for(i=1;i<2;i++){
        if(a==1)
            break;
    }

    switch ( menu() )            
    {
     case 'a':
     case 'A': action1();            
             break;          
     default:  action2();
    }

    return i;
}//last line note