/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include <stdio.h>

int main()
{
    int n, i;
    float num[100], sum = 0.0;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

	// HERE IS THE BUG, average is declared as int, that will give wrong output. CHANGE int average TO float average.
	float average;
    average = sum / n;
    printf("Average = %.2f", average);

    return 0;
}
