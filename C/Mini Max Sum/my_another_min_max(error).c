#include "stdio.h"

int main(){
    int arr[100];
    int n, min = 0, max = 0 ;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int s = 0; s < n-1; s++) {
        min = min + arr[s];
    }
    
    for (int j = 1; j < n+1; j++){
        max = max + arr[j];
    }
    
    printf("%d %d", min, max);
    
    return 0;
}