/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
		
		// HERE IS THE BUG, n SHOULD BE DIVIDED BY 10 ON EACH ITERATION, NOT BY 100
        n /= 100;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
