#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = "Python";

    printf("Length of string is : %d\n" , strlen(Arr)); //6

    printf("Size of string is : %d\n" , sizeof(Arr)); // 7

    printf("%c\n" , Arr[3]);
    printf("%c\n" , Arr[5]);
    printf("%c\n" , Arr[1]);

    return 0;
}