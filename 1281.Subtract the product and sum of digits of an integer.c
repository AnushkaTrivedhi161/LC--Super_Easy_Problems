int subtractProductAndSum(int n) {
    int r,sum=0,pro=1;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        pro*=r;
        n/=10;
    }
    return (pro-sum);
}
