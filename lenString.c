/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include <stdio.h>
int main()
{
    char s[1000], i;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; ++i);

	// HERE IS THE BUG, LENGTH OF THE STRING WILL BE EQUAL TO i, not (i-1)
    printf("Length of string: %d", i-1);
    return 0;
}
