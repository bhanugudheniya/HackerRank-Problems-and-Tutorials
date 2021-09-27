#include "stdio.h"
#include "stdlib.h"
int ele(int arr[], int num){
    int j, count = 1;
        for(int i = 0; i < num; i++){
        for(j = 0; j < num; j++){
            if( arr[i] == arr[j] && i != j)
                break;
        }
            if(j == num){
                printf("%d ", arr[i]);
                ++count;
            }
        }
    return -1;
}

int main(){
    int arr[100];
    int num;
    
    scanf("%d", &num);
    
    
    for(int i = 0; i < num; i++){
        scanf("%d ", &arr[i]);
    }    
    
    ele(arr, num);
    
    return 0;
}
