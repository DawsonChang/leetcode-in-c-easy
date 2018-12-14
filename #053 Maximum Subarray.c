int maxSubArray(int* nums, int numsSize) {
    int adar[numsSize + 1], maxsum;
    
    adar[0] = nums[0];
    maxsum = nums[0];
    for (int i=1; i < numsSize; i++)
    {
        if (adar[i - 1] < 0)
            adar[i] = nums[i];
        else
            adar[i] = adar[i - 1] + nums[i];
        if (adar[i] > maxsum)
            maxsum = adar[i];
    }
    return (maxsum);
}
