#include<stdio.h>
void main(){
    
    for(int i = 1; i <= 5; i++){
        int num = 1;
        for(int j = 1; j <= i; j++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
}