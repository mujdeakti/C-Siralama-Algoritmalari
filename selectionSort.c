/*selection sort ta , bütün diziyi gezer ve en küçüğünü en başa alır
  5 9 4 6 15
 //önce 4 ü en başa alır
 4 9 5 6 15
 //sonra 9 5 6 15 arasından en küçüğünğ secer ve 4 ün sağına yazar
 4 5 9 6 15
//daha sonr kalanlar arasından en küçüğünü bulup 5 in yanına atar
4 5 6 9 15
 */
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
//en küçüğü bulup atama yapacağımızdan en küçüğü ifade eden bir indeks kurmalıyız
void selectionsort(int dizi[],int boyut)
{
    int enkucukIndex;
    for(int i=0;i<boyut;i++)
    {
     enkucukIndex=i;//en küçük indexi 0. elemana ataık önce    
     for(int j=i+1;j<boyut;j++)
     {
        if(dizi[j]<dizi[enkucukIndex])
        {
            enkucukIndex=j;
        }
     }
     int temp=dizi[i];
     dizi[i]=dizi[enkucukIndex];
     dizi[enkucukIndex]=temp;

    }
}
int main()
{
    int tamsayiDizisi[MAX],boyut;
    printf("Kac elemanli bir dizi kurmak istersiniz?\n");
    scanf("%d",&boyut);

   for(int i=0; i<boyut;i++)
   {
     printf("%d. elemani giriniz:\n",i+1);
     scanf("%d",&tamsayiDizisi[i]);
   }
   for(int i=0;i<boyut;i++)
   {
     printf("%d ",tamsayiDizisi[i]);
   }
   printf("\n");
   selectionsort(tamsayiDizisi,boyut);
    for(int i=0;i<boyut;i++)
   {
     printf("%d ",tamsayiDizisi[i]);
   }
    return 0;
}