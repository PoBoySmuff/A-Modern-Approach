//Project 6
//Modify the program from problem 6 to use: ((((3x+2)x-5)x-1)x+7)x-6

#include <stdio.h>

int main(void)
{
        int x, answer;
        printf("Enter a value for x: ");
        scanf("%d", &x);
        answer = ((((3*x+2) * x-5) * x-1) * x + 7) * x - 6;
        printf("Answer: %d\n", answer);
        return 0;
}


