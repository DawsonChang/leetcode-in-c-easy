int climbStairs(int n) {
    
    int i;
    int A[n];
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    A[0] = 1;
    A[1] = 2;
    for (i = 2; i < n; i++)
    {
        A[i] = A[i-1] + A[i-2];
    }
    return A[i-1];
    
}
