int removeDuplicates(int* nums, int numsSize) {
    int* arr = (int*)malloc(sizeof(int) * (numsSize+1));
    int j = 0;
    arr[0] =numsSize+1;
    for (int i = 0; i < numsSize; i++) {
        
        if (arr[j] != nums[i])
        {  
            j++;
            arr[j] = nums[i];
        }
    }
    for(int i=0;i<j;i++)
    {
        nums[i]=arr[i+1];
    }
    return j;
}