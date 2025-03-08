int arraySign(int* nums, int numsSize) {
    int i,c=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
           return 0;
        else if(nums[i]<0)
        {
            c++;
        }
    }
    return (c%2 != 0)?-1:1;

}
