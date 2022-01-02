#include <stdio.h>
#include "string.h"

int main(){
    char arr[1000000]={'\0'};
    int alphabet[26]={0,};

    puts(arr);

    for(int i=0; i<strlen(arr); i++){
        if(arr[i]>= 'A' && arr[i]<='Z') arr[i] -= 'A';
        else if(arr[i]>= 'a' && arr[i]<='z') arr[i] -= 'a';
    }
    for(int i=0; i<strlen(arr); i++){
        alphabet[arr[i]]++;
    }
    for(int i=0; i<strlen(arr); i++){
        
    }
    return 0;
}