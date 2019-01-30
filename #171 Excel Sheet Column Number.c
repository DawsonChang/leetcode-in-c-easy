int titleToNumber(char* s) {
    int len = strlen(s);
    int a;
    int i = 0;
    int sum = 0;
    
    while(len > 0) {
        a = pow(26, len-1);
        a = a * ((int)(s[i])-64);
        sum += a;
        i++;
        len--;
    }
    return sum;
}
