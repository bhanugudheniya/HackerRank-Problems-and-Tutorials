#include "stdio.h"

int abs_val(int y){
    if(y<0)
    return(y*-1);
    else
    return(y);
}

int main(){
    int arr[100][100];
    int num, RTL = 0, LTR = 0, DiaMinus, result;
    
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            scanf("%d", &arr[i][j]);
            
            if(i==j)
                RTL = RTL + arr[i][j];
            if((i+j) == (num-1))
                LTR = LTR + arr[i][j];
        }
    }
    
    DiaMinus = RTL - LTR;
    result= abs_val(DiaMinus);
    printf("%d", result);
    
    return 0;
}
