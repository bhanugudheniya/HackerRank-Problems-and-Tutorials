#include<stdio.h>

void main(){
    char s[8];

    printf("Enter Time in format 'HH:MM:SS:AM/PM : ");
    if(s[0] >= 0 || s[0] <=1 && s[1] >= 0 || s[1] <= 9){
        if(s[2] >= 0 || s[2] <= 59 && s[3] >= 0 || s[3] <= 59){
            if(s[4] >= 0 || s[4] <= 59 && s[5] >= 0 || s[5] <= 59){
                if(s[6]=='A' || s[6]=='P' && s[7] >= 0 || s[7] <= 59){
                    scanf("%s\n", &s);
                }
                else{
                    printf("Please Enter Valid Format\n");
                }
            }
            else{
                printf("Please Enter Valid Seconds\n");
            }
        }
        else{
            printf("Please Enter Valid Minutes\n");
        }
    }
    else{
        printf("Please Enter Valid Hour\n");
    }

    printf("Print Time : %s\n", s);
}

// /////////////////////////////////////////////////////////////////////////////////////////// //

#include "stdio.h"
#include "string.h"

void print24(char* str){
    int h1 = (int)str[1] - '0';
    int h2= (int)str[0] - '0';
    int hh =  (h2 * 10 + h1 % 10);
    
    if(str[8] == 'A'){
        if(hh == 12){
            printf("00");
            for (int i = 2; i<=7; i++) 
                printf("%c", str[i]);
            
        }
        else {
            for (int i = 0; i<=7;i++) 
            printf("%c", str[i]);
            
        }
    }
    
    else {
        if (hh == 12) {
            printf("12");
            for (int i = 2; i<=7; i++) 
                printf("%c", str[i]);
            
        }
        else {
            hh = hh + 12;
            printf("%d", hh);
            for (int i = 2; i<=7; i++) 
                printf("%c", str[i]);
            
        }
    }
}

int main(){
    char str[12] = "07:05:45PM";
    print24(str);
    return 0;
}
