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