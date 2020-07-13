int main()  
{
    int x[2][3],n,i,j;
    for(i = 0;i<2;i++)
        for(j =0;j<3;j++){
            x[i][j] = i*2+j;
        }
    for(i = 0;i<2;i++)
        for(j =0;j<3;j++){
            n = x[i][j];
            write(n);
        }
    i = 2 * 3;
    // int i,j;
    // for(i = 0;i<2;i++)
    //     for(j =0;j<3;j++){
    //         write(j);
    //     }

    // int x[10],i,j;
    // for(i = 0;i<10;i=i+1)
    //     write(i);

    //int x[10];
    // int x[2][3],n,i,j;
    // i = 1;j=2;
    // x[i][j] = 50;
    // n = x[i][j] ;
    // write(n);
    return 1;
}