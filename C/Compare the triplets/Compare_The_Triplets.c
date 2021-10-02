#include "stdio.h"

void comp(int a[], int b[]){
    int countA = 0, countB = 0;
    
    for(int i = 0; i < 3; i++){
        if(a[i] > b[i]){
            countA = countA + 1;
        }
        else if(a[i] < b[i]){
            countB = countB + 1;
        }
    }
    
    printf("%d %d", countA, countB);    
}

int main(){
    int a[3];
    int b[3];
    int countA = 0, countB = 0;
    int lenA = sizeof(a)/ sizeof(a[0]);
    int lenB = sizeof(a)/ sizeof(a[0]);
    
    for(int i = 0; i<3; i++){
        scanf("%d", &a[i]);
    }
    
    for (int j = 0; j<3; j++) {
        scanf("%d", &b[j]);
    }
    
    comp(a, b);
    
    return 0;
}