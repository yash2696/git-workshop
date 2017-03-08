/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include<stdio.h>
int main(){

    int n,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

    sum = (n * (n + 1)) / 2;

    printf("Sum of the series: ");

	// HERE IS THE BUG, LOOP SHOULD GO UPTO AND INCLUDING n, change < to <=
    for(i =1;i <=n n;i++){
         if (i!=n)
             printf("%d + ",i);
         else
             printf("%d = %d ",i,sum);
         }
   
    return 0;
}
