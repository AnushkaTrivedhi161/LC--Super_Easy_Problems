int addDigits(int num) {
    int rem,sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        if(num==0 && sum>9)
        {
            num=sum;
            sum=0;
        }
    }return sum;
    
}
