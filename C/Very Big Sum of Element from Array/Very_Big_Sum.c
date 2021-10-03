#include "stdio.h"

int main(){
    int long arr[100];
    int num;
    int long sum = 0;
    
    scanf("%d", &num);
    
    for (int i = 0; i<num; i++) {
        scanf("%ld", &arr[i]);
    }
    
    for (int i = 0; i<num; i++) {
        sum = sum + arr[i];
    }
    
    printf("%ld", sum);
    return 0;
}