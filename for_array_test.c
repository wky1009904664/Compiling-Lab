int main()
{
    int a[20],b[20],c[20][20];
    int p =0;
    for(int i =0;i<20;i++){
        p = p + a[i]*b[i];
        if(i==10 && p != 2){
            c[1][2] = p;
            break;
        }
        p++;
    }
    return 0;
}
