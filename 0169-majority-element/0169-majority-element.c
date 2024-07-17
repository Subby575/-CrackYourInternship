int compare(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
int majorityElement(int* nums, int numsSize) {
    int count = 0, elem = 0;

    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize; i++) {
        if (nums[elem] == nums[i]) {
            count++;
            if (count == ((numsSize / 2) + 1)) {
                return nums[elem];
            }
        } else if (nums[elem] != nums[i]) {
            elem = i;
        }
    }
    return NULL;
}