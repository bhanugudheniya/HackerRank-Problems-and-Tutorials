#include <stdio.h>
#include <string.h>

void main()
{
    int num1, num2, count=0;
    char arr1[1000][30];
    char arr2[1000][30];

    printf("Enter Element number of array 1 : ");
    scanf("%d\n", &num1);

    for (int i = 0; i < num1; i++)
    {
        scanf("%s\n", arr1[i]);
    }

    printf("\n");

    printf("Enter Element number of array 2 : ");
    scanf("%d\n", &num2);

    for (int i = 0; i < num2; i++)
    {
        scanf("%s\n", arr2[i]);
    }

    //compare

    for(int i = 0; i<num2; i++){
        for(int j = 0; j<num1; j++){
            // if(arr2[i] == arr1[j]){
            if(strcmp(arr2[i], arr1[j]) == 0){
                count++;
            }
        }
            printf("%d\n", count);
    }

    // for(int i = 0; i<num2; i++){
    //     if(strcmp(arr2[i],arr1[i]) == 0){
    //         count++;
    //     }
    //     printf("%d\n", count);
    // }



// printf("\n");
//     for (int i = 0; i < num1; i++)
//     {
//         printf("%s\n", arr1[i]);
//     }
    
//     printf("\n");
//     for (int i = 0; i < num2; i++)
//     {
//         printf("%s\n", arr2[i]);
//     }
}
