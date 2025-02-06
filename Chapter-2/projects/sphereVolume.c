//Project 2
//Compute the volume of a sphere with a 10 meter radius.

#include <stdio.h>
#define PI 3.14159f
int main(void)
{
	float volume, radius;
	printf("Insert sphere radius: ");
	scanf("%f", &radius);
	volume = (4.0f/3.0f) * PI * (radius * radius * radius);
	printf("Volume of sphere: %.2f\n", volume);
	return 0;
}
	
