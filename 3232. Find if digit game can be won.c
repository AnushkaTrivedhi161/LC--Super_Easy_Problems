bool canAliceWin(int* nums, int numsSize) {
    int i;
    int s=0;
    int d=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]<10)
        {
            s+=nums[i];
        }
        else if(nums[i]>=10)
        {
            d+=nums[i];
        }
    }
    if(s>d || d>s)
    {
        return true;
    }
    return false;
}
