/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
		// HERE IS THE BUG, CHANGE i<n to i<=n
        for(i=1; i<n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
