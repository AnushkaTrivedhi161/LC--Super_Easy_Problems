/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* arr=(int*)malloc(sizeof(int)*numsSize);
    int end=numsSize - 1;
    int i=numsSize - 1;
    int start=0;

    while(start<=end)
    {
        int start2=nums[start]*nums[start];
        int end2=nums[end]*nums[end];

        if(end2>start2)
        {
            arr[i--]=end2;
            end--;
        }
        else
        {
            arr[i--]=start2;
            start++;
        }
    }

    
    *returnSize=numsSize;
    return arr;
    free(arr);
}
