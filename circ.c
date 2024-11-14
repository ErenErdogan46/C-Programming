#include<stdio.h>

int main()
{
    int radius;
    printf("Radius: ");
    scanf("%d",&radius);
    
    float pi= 3.14;
    
    float circ=2*pi*radius; //circ is a floating number
    //Because it includes int * float* int
    printf("\nThe circumference is %f\n",circ);

}
