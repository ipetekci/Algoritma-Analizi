#include<stdio.h>
int main(){

  int i,j,s,temp,a[20];

  printf("Siralanacak eleman sayisini giriniz: ");
  scanf("%d",&s);

  printf("Girilen %d eleman: ",s);
  for(i=0;i<s;i++)
      scanf("%d",&a[i]);

  for(i=1;i<s;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
  }

  printf("Sýralandýktan sonra: ");
  for(i=0;i<s;i++)
      printf(" %d",a[i]);

  return 0;
}
