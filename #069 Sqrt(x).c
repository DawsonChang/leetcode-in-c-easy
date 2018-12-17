int power(int a)
{
    int output = 1;
    for (int k = 0; k < a; k++)
    {
        output = output * 10;
    }
    return output;
}

int mySqrt(int x) {
    int input = x;
    int digit = 0;
    while (input != 0)
    {
        input = input / 10;
        digit++;
    }
    
    int i, top, button;
    if (digit % 2 == 0)
    {
        top = power(digit/2);
        button = power(digit/2-1);
    }
    else
    {
        top = power(digit/2+1);
        button = power(digit/2);
    }
    //int top = x;
    //int button = 1;
    int mid;
    int result;
    if (x == 0)
        return 0;
    while (button <= top)
    {
        mid = button + (top-button) / 2;
        if (mid <= x/mid)
        {
            result = mid;
            button = mid + 1;
        }
        else
        {
            top = mid - 1;
        }

    }
    return result;
}
