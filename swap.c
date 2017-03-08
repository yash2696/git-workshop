/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/

// THERE ARE NO BUGS IN THIS PROGRAM. HAPPY NOW :P
#include <stdio.h>
void swap(float *ptr1, float  *ptr2);
 
void main()
{
    float m, n;
 
    printf("Enter the values of M and N \n");
    scanf("%f %f", &m, &n);
    printf("Before Swapping:M = %5.2ftN = %5.2f\n", m, n);
    swap(&m, &n);
    printf("After Swapping:M  = %5.2ftN = %5.2f\n", m, n);
}

/*  Function swap - to interchanges the contents of two items */
void swap(float *ptr1, float *ptr2)
{
    float temp;
 
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
