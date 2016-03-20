#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int[], int);
 
void main() {
   int arr[30], num, i;
 
   printf("\nEleman sayisini giriniz :");
   scanf("%d", &num);
 
   printf("\nElemanlari giriniz:");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
 
   bubble_sort(arr, num);
   getch();
}
 
void bubble_sort(int iarr[], int num) {
   int i, j, k, temp;
 
   printf("\nSýralanmamiþ dizi:");
   for (k = 0; k < num; k++) {
      printf("%5d", iarr[k]);
   }
 
   for (i = 1; i < num; i++) {
      for (j = 0; j < num - 1; j++) {
         if (iarr[j] > iarr[j + 1]) {
            temp = iarr[j];
            iarr[j] = iarr[j + 1];
            iarr[j + 1] = temp;
         }
      }
 
      printf("\nTur %d : ", i);
      for (k = 0; k < num; k++) {
         printf("%5d", iarr[k]);
      }
   }
}
