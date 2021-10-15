#include<stdio.h>

void main(){
    int n;
    int arr[10][10];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for(int s = i; s < n; s++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
}