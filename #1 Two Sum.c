/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    
    int *R = malloc(2*sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
               
                R[0] = i;
                R[1] = j;
                return R;
            }
        }
    }
    return R;
}
