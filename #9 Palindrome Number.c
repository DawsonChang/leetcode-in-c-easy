bool isPalindrome(int x) {
    
    if (x < 0)
    {
        return false;
    }
    
    int current = x;
    int result = 0;
    
    while(current != 0)
    {
        result = result * 10 + current % 10;
        current = current / 10;
    }
    
    if (result == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
