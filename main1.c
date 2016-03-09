#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  SIZE  10  //  rastgele sayý üretilir

int main()
{
 int i, k;
 int sayac=0;
 int a[SIZE];
 int aranan;
 int ek, ort, eb;
 
 srand(time(0));
 for (k = 0; k < SIZE; ++k) 
  a[k] = rand() ;
   
 
 for (i = 0; i < SIZE - 1; ++i)
  for (k = 0; k < SIZE - 1 - i; ++k)
   if (a[k] > a[k + 1]) {
    int temp = a[k];
    a[k] = a[k + 1];
    a[k + 1] = temp;
   }
 
 for (k = 0; k < SIZE; ++k)
  printf("%d ", a[k]);

 
 printf("aranacak deger = ");
 scanf("%d", &aranan);
 
 ek = 0;
 eb = SIZE - 1;
 
 while (ek <= eb) {
  ort = (ek + eb) / 2;
  if (a[ort] == aranan){
  	 sayac++;
  	 break;
  }
  
  if (a[ort] > aranan){
  	 sayac++;
  	 eb = ort - 1;
  }
  
  else{
   	 sayac++; 
  	 ek = ort + 1;  
  }
  
 }
 
 if (ek > eb)
  printf("bulunamadin gezilen iterasyon= %d",sayac);
 else
  printf("bulundu! a[%d] = %d ===>  Gezilen iterasyon=%d", ort, aranan,sayac);
  
 
 
 return 0; 
}
