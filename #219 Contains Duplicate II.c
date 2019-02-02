bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j <= i+k && j < numsSize; j++) {
            if(nums[i] == nums[j]) return true;
        }
    }
    return false;
}
