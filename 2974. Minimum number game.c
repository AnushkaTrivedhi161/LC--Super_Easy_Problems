/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* nums, int numsSize, int* returnSize) {
    int t;
    for(int i=0;i<numsSize-1;i++)
    {
       for(int j=i+1;j<numsSize;j++)
       {
        if(nums[i]>nums[j])
        {
            t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
        }
       }
    } 
    int j=0;
    int *arr=(int*)malloc(sizeof(int)*numsSize);
    for(int i=1;i<numsSize;i+=2)
    {
        arr[j++]=nums[i];
        arr[j++]=nums[i-1];
    }  
    *returnSize=numsSize;
    return arr;
}
