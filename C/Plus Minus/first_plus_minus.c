#include "stdio.h"

void fraction(int arr[], int length){
    float zero = 0, positive = 0, negative = 0;
    
/* ******************************************************************************* */
    // int num;
    // printf("Enter No. of Array Elements : ");
    // scanf("%d\n", &num);
    
    // for(int element = 0; element < num; element++){
    //     printf("Enter %d element : ", element+1);
    //     scanf("%d\n", &arr[element]);
    // }
/* ******************************************************************************* */
    
    for(int i = 0; i<length; i++){
        if(arr[i] == 0){
            zero++;
        }
        else 
        if (arr[i] < 0) {
        negative++;
        }
        else 
        positive++;
    }
    
    printf("%f\n", positive/length);
    printf("%f\n", negative/length);    
    printf("%f\n", zero/length);
}


int main(){
    int length;
    int arr[] = {-4,3,-9,0,4,1};
    // int arr[100];    
    length = sizeof(arr)/sizeof(arr[0]);
    fraction(arr, length);     
    
    
    // int arr1[] = {1,2,3,-1,-2,-3,0,0};    
    // length = sizeof(arr1)/sizeof(arr1[0]);    
    // fraction(arr1, length);             
    
    return 0;
}