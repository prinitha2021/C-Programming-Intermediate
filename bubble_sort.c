#include<stdio.h>

int main(){

   int count, temp, i, j, number[30];

   printf("enter total n numbers to be sorted: ");
   scanf("%d",&count);

   printf("Enter the %d numbers: ",count);

   for(i=0;i<count;i++)
   scanf("%d",&number[i]);

   for(i=count-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(number[j]>number[j+1]){
           temp=number[j];
           number[j]=number[j+1];
           number[j+1]=temp;
        }
      }
   }

   printf("Sorted elements are: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
