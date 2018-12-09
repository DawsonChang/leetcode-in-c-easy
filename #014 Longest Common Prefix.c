char* longestCommonPrefix(char** strs, int strsSize) {
	int i = 0;
    int len = strlen(strs[0]);
    
    char *res = malloc (sizeof(char*) * len);
    *res = NULL;

    if (strsSize == 0)
    {
    	res[i] = '\0';
    	return res;
	}
	if (strsSize == 1)
		return strs[0];
    int j = 0;
    while(1)
    {
    	for (j = 0; j < strsSize - 1; j++) {
    		if (strs[j][i] != strs[j+1][i])
    		{
    			res[i] = '\0';

				return res;
			}
        }
    	res[i] = strs[j][i];
        i++;
        if (i > strlen(strs[0]))
            return res;

	}
}
