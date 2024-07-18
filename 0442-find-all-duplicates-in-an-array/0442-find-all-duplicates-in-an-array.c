/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int *arr=(int*)calloc(sizeof(int),numsSize);
    int *dupl=(int*)calloc(sizeof(int),numsSize-1);
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(arr[nums[i]%numsSize]!=0)
        {
            dupl[k]=nums[i];
            // *returnSize++;
            k++;
        }
        else{
            arr[nums[i]%numsSize]=1;
        }
    }
    *returnSize=k;
    return dupl;
}