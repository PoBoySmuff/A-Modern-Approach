//Name: dweight.c
//Purpose: Compute the dimensional weight of a box from user-provided input

#include <stdio.h>

int main(void) 
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume+165) / 166; /* Dimensional weight calculated as volume/166, add 165 due to integer rounding in order to ensure roundup*/

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}