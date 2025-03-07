int differenceOfSums(int n, int m) {
    int i;
    int num11=0;
    int num22=0;
    for(int i=1;i<=n;i++)
    {
        int num1=i;
        int num2=i;
        if(num1 % m != 0)
        {
            num11+=num1;
        }
        if(num2 % m == 0)
        {
            num22+=num2;
        }
    }
    return (num11 -num22);
}
