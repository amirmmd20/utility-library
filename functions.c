#include <string.h>

void reverseString(char str[]){
    int i=0;
    int j= strlen(str)-1;
    char t;
    while(i<j){
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
}
#include "functions.h"

int reverseNumber(int n)
{
    int reversed = 0;
    int sign = 1;

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n != 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return reversed * sign;
}
