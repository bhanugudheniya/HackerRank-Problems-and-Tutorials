#include "stdio.h"

int abs_val(int y){
    if(y < 0)
    return (y*-1);
    else 
    return (y);
}

int main(){
    int arr[100][100];
    int num, LTR = 0, RTL = 0 ,DiaMinus, result;
    
    
    scanf("%d", &num);
    
    // Scan element
    for (int i = 0; i<num; i++) {
        for (int j = 0; j<num; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Left to Right Diagonal Operation
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            if(i == j){
                LTR = LTR + arr[i][j];
            }
        }
    }
    
    // Right to Left Diagonal Operation
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if((i+j) == (num-1)){
                RTL = RTL + arr[i][j];
            }
        }
    }
    
    DiaMinus = LTR - RTL;
    result = abs_val(DiaMinus);
    printf("%d", result);    
    return 0;
}