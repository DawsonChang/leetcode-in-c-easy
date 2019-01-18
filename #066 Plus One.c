/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int sum = 0;
    for (int i = 0; i < digitsSize; i++) {
        sum += digits[i];
    }
    if (sum == digitsSize * 9) {
        *returnSize = digitsSize + 1;
        int *result = (int*)malloc((digitsSize + 1) * sizeof(int));
        result[0] = 1;
        for (int i = 1; i <= digitsSize + 1; i++)
            result[i] = 0;
        
        return result;
    }
    else {
        *returnSize = digitsSize;
        int *result = (int*)malloc((digitsSize) * sizeof(int));
        int carry = 1;
        
        for (int i = digitsSize-1; i >= 0; i--) {
            if (digits[i] + carry == 10) {
                result[i] = 0;
                carry = 1;
            }
            else {
                result[i] = digits[i] + carry;
                carry = 0;
            }
        }
        return result;
    }   
}
