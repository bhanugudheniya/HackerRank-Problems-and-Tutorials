#include "stdio.h"

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int num, temp=0, length, minSum=0, maxSum=0;
    
// calculate length of array
    length = sizeof(arr)/sizeof(arr[0]);
    
// take input element in arrya from user
    for (int i = 0; i<length; i++) {
        scanf("%d\n", &arr[i]);
    }

// sort the array using simple swaping method
    for(int i = 0; i<length; i++){
        for (int j = i+1; j<length; j++) {
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
// calculate 4 minimum value element using loop
    for(int i = 0; i<length-1; i++){
        minSum = minSum + arr[i];
    }
    
// calculate 4 maximum value element using loop
    for (int i = 1; i<length; i++) {
        maxSum = maxSum + arr[i];
    }
    
    printf("%d %d", minSum, maxSum);
   
    
   return 0; 
}