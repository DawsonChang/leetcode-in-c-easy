void swap(int *nums1, int i, int j)
{
    int temp;
    temp = nums1[j];
    nums1[j] = nums1[i];
    nums1[i] = temp;
}

void merge(int* nums1, int m, int* nums2, int n) {
    for (int i = m; i < m+n; i++)
    {
        nums1[i] = nums2[i-m];
    }
    
    for (int i = 0; i < m+n; i++)
    {
        for(int j = i+1; j < m+n; j++)
        {
            if (nums1[i] > nums1[j])
                swap(nums1, i, j);
        }
    }
    return nums1;
}
