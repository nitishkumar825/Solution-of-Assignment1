// WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the value for the radius of the circle : ");
    scanf("%f",&radius);
    printf("Area of circle is %.2f having the radius %.2f.",3.14*radius*radius,radius);
    return 0;
}