int lengthOfLastWord(char* s) {
    
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (isalpha(s[i]))
        {
            count++;
        }
        if (s[i-1] == ' ' && isalpha(s[i]))
        {
            count = 0;
            count++;
        }
    }
    
    return count;
}
