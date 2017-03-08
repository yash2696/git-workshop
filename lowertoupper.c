/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include<stdio.h>
int main(){
  char str[20];
  int i;
  printf("Enter any string->");
  scanf("%s",str);
  printf("The string is = %s",str);
  for(i=0;i<=strlen(str);i++){
	// HERE IS THE BUG, THE RANGE OF SMALL CASE LETTERS IS 97 TO 122.
	if(str[i]>=97&&str[i]<=121)
		str[i]=str[i]-32;
  }
  printf("\nThe string in lowercase is = %s",str);
  return 0;
}
