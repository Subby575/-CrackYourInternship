void moveZeroes(int* nums, int numsSize)
{
    int* arr=(int*)malloc(numsSize*sizeof(int));
    int i,j=0;

    for(i=0;i<numsSize;i++)
        if(nums[i]!=0)
        {
            arr[j]=nums[i];
            j++;
        }
    while(j<numsSize)
    {
        arr[j]=0;
        j++;
    }

    for(i=0;i<numsSize;i++)
        nums[i]=arr[i];
    
    free(arr);
}