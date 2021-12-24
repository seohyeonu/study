#include <stdio.h>
#include "stdlib.h"

int main() {
    char arr[100] = {'\0'};
    int inx=0;
    gets(arr);

    for(int i='a'; i<='z'; i++){
        if(arr[inx] == i) printf("%d", i);
        else printf("-1");
    }
    return 0;
}
