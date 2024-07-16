int findDuplicate(int* nums, int numsSize)
 {
  int* arr=(int*)calloc(sizeof(int),numsSize);
  for(int i=0;i<numsSize;i++)
  {
    if(arr[nums[i]%numsSize]==0)
    {
        arr[nums[i]%numsSize]=INT_MAX;
    }
    else
    {
         return nums[i];
    }
  }
  return NULL;
}