#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void bubbleSort(int sayi[],int length);

int main()
{
    int dizi[]={1,3,5,0,2,7,8,6,9};

    int length=10;
    for(int i=0;i<length;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\n");
    bubbleSort(dizi, length);
 for(int i=0;i<length;i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0;
}
void bubbleSort(int sayiDizisi[],int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=1;j<length;j++)
        {
            if(sayiDizisi[j-1]>sayiDizisi[j])
            {
                 int temp=sayiDizisi[j];
                 sayiDizisi[j]=sayiDizisi[j-1];
                 sayiDizisi[j-1]=temp;
            }
        }
    }
}