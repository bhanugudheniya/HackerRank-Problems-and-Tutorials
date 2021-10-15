#include "stdio.h"

int main(){
    long arr[100000];
    long n, max = 0, count = 0;
    
    scanf("%ld", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%ld", & arr[i]);
        if (max < arr[i])
        max = arr[i];
    }
    
    for (int i = 0; i <= n; i++){
        if (arr[i] == max){
            count++;
        }
    }
    printf("%ld", count);
    
    return 0;
}