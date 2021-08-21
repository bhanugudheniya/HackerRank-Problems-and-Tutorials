#include <stdio.h>
#include <string.h>

int main()
{
    int num1, num2, count;
    char arr1[1000][30];
    char arr2[1000][30];

    scanf("%d\n", &num1);

    for (int i = 0; i < num1; i++)
    {
        scanf("%s\n", arr1[i]);
    }

    scanf("%d\n", &num2);

    for (int i = 0; i < num2; i++)
    {
        scanf("%s\n", arr2[i]);
    }

    //compare

    for(int i = 0; i<num2; i++){
        count = 0;
        for(int j = 0; j<num1; j++){
            // if(arr2[i] == arr1[j]){
            if(strcmp(arr2[i], arr1[j]) == 0){
                count++;
            }
        }
            printf("%d\n", count);
    }

return 0;
}