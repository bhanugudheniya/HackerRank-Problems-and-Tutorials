#include<stdio.h>
void main(){ 
    char ch = 'A', str = 'E';
    for(int i = 1; i <= ('E' - 'A' + 1); ++i){
        for(int j = 1; j <= i; ++j){
            printf("%c ", ch);
        }
            ++ch;
        printf("\n");
    }
}