void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0,j=0,k=0,l=0;
        int* arr=(int*)malloc(sizeof(int)*(nums1Size));
        while(i<m && j<n & k<(m+n))
        {
            if(nums1[i]<=nums2[j])
            {
                arr[k]=nums1[i];
                k++;
                i++;

            }
            else if(nums1[i]>nums2[j]){
                arr[k]=nums2[j];
                k++;
                j++;
            }
            // printf(" %d i=%d , j=%d",arr[k-1],i,j);
        }
        while(i<m)
        {
            arr[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n)
        {
            arr[k]=nums2[j];
            j++;
            k++;
        // printf(" %d ",arr[k-1]);
        }
        while(l<nums1Size){
            nums1[l]=arr[l];
            l++;
        }
        free(arr);
    }
