int countPrimes(int n) {
    int count = 0;
    bool isPrime;
    for (int i = 2; i < n; i++) {
        isPrime = true;
        for (int j = 2; j <= (int)sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true)
        count++;
    }
    return count;
}
