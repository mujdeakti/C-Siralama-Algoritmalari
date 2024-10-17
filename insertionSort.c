#include<stdio.h>
#include<stdlib.h>
#define MAX 50 
int key;
void insertionSort(int dizi[],int boyut)
{
  int i,j;
  for(i=1;i<boyut;i++)
  {
    key=dizi[i];
    j=i-1;
    while(key<dizi[j] && j>=0)
  {
    dizi[j+1]=dizi[j];
    j--;
  }
  dizi[j+1]=key;
  }
}
int main()
{
   int sayiDizisi[MAX], boyut;
    printf("Kac elemanli bir dizi girmek istersiniz?\n");
    scanf("%d",&boyut);

   for(int i=0;i<boyut;i++)
   {
    printf("%d. elemani giriniz:",i+1);
    scanf("%d",&sayiDizisi[i]);
   }
   for(int i=0;i<boyut;i++)
   {
    printf("%d ",sayiDizisi[i]);
   }
   printf("\n");
 insertionSort(sayiDizisi,boyut);
for(int i=0;i<boyut;i++)
   {
    printf("%d ",sayiDizisi[i]);
   }
    return 0;
}