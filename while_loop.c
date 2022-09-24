#include<stdio.h>

int main(){
    int a = 0;
    printf("enter the value of a ");
    scanf("%d", &a);

    while (a<=100)
    {
        printf("%d \n", a);
        a++;
    }
    return 0;
}