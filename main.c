#include <stdio.h>
int main(){
    char arr[100] = {'\0', };
    int count;

    gets(arr);

    for(int j='a'; j<='z' ;j++){
        count = 0;
        for(int i=0; arr[i] != '\0'; i++){
            if(arr[i] == j){
                printf("%d ", i);
                count++;
                break;
            }
        }
        if(count == 0) printf("-1 ");
    }
    return 0;
}