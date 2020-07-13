int main()  
{
    int x[2][3],i,j,m;
//    int x[2][3]={1,2,3,4,5,6,},i,j;  //有初始化使用这一行，同时去掉前面一行，测试时需要告知一下
    m=x[0][0];
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            if (x[i][j]>m)  m=x[i][j];
    return 1;
}