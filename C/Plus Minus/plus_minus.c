#include<stdio.h>

int main(){
    float positive=0, negative=0, zero=0;
    int arr[100] = {-4,3,-9,0,4,1};
    int n;
    
    scanf("%d\n", &n);
    
    for(int i = 0; i<n; i++){
        scanf("%d\n", &arr[i]);
    }
    
    
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    
    printf("%f\n", positive/n);
    printf("%f\n", negative/n);
    printf("%f\n", zero/n);
    
    return 0;
}
