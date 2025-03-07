int differenceOfSum(int* nums, int numsSize) {
    int i;
    int sum=0;
    for(i=0;i<numsSize;i++)
    {
        sum+=nums[i];
    }
    int s=0,rem=0,num;
    for(i=0;i<numsSize;i++)
    {
        
        num=nums[i];
        if(num%10 != num)
        {
        while(num!=0)
        {
            rem=num%10;
            s+=rem;
            num/=10;
        }
        }
        else{
        s+=num;
        }
    }
    int tot=0;
    tot=sum-s;
    return tot;
}
