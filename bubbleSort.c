/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include<stdio.h>
 
void bubble_sort(int[], int);
 
void main() {
   int arr[30], num, i;
 
   printf("Enter no of elements :");
   scanf("%d", &num);
 
   printf("Enter array elements :");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
 
   bubble_sort(arr, num);
   printf("\n");
}
 

// HERE IS THE BUG, IN THE INNER LOOP, CHANGE j < num to j < num-1
void bubble_sort(int iarr[], int num) {
   int i, j, k, temp;
   for (i = 1; i < num; i++) {
      for (j = 0; j < num-1; j++) {
         if (iarr[j] > iarr[j + 1]) {
            temp = iarr[j];
            iarr[j] = iarr[j + 1];
            iarr[j + 1] = temp;
         }
      }
   }
   
	for (k = 0; k < num; k++) {
         printf("%5d", iarr[k]);
	}
}
