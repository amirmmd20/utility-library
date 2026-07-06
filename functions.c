#include <stdio.h>
#include "functions.h"
int sumDigit(int n){
    int sum=0;
    if(n<0)
        n=-n;
    while (n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}