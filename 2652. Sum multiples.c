int sumOfMultiples(int n) {
    int i;
    int sum=0;
    int b[n+1];
    for(i=1;i<=n;i++)
    {
       b[i]=i;
    }
    for(i=1;i<=n;i++)
    {
        if(b[i]%3==0)
        {
            sum+=b[i];
        }
        else if(b[i]%5==0)
        {
            sum+=b[i];
        }
        else if(b[i]%7==0)
        {
            sum+=b[i];
        }
    }
    return sum;
}
