#include <stdio.h>
#include "string.h"

int main(){
    char arr[1000000]={'\0',};
    int len,count=0,num=0,sp=0;

    gets(arr);
    len = strlen(arr);

    if(arr[0] != ' ') sp++;
    if(arr[len-1] == ' ') sp--;
    for(int i=0; i<len; i++){
        if(arr[i] != ' ') num++;
    }

    count = len - num;
    if(sp != 0) printf("%d", count+sp);
    else printf("%d", count);


    return 0;
}