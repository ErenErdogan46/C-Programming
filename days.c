#include<stdio.h>

int main()
{
    int age;
    printf("How old are you: ");
    scanf("%d",&age);
    int days=365*age;
    printf("\nYou lived %d days!",days);

}
