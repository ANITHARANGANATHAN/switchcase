#include<stdio.h>

int main()
{
   int qty,i,ch,total;
   printf("\n\tMENU CARD");
   printf("\n\t\t1.coffee        Rs:15");
   printf("\n\t\t2.tea           Rs:10");
   printf("\n\t\t3.cold coffee   Rs:20");
   printf("\n\t4.milk shake      Rs:30");
   printf("\n\n enter your choice");
   scanf("%d",&ch);
switch(ch)
{
case 1:
      printf("\n item:coffee");
      printf("\n enter the quantity");
      scanf("%d",&qty);
      total=qty*15;
      printf("\nprice:",total);
      break;
case 2:
      printf("\n item:tea");
      printf("\n enter the quantity");
      scanf("%d",&qty);
      total=qty*10;
      printf("\nprice:",total);
      break;
case 3:
      printf("\n item:cold coffee");
      printf("\n enter the quantity");
      scanf("%d",&qty);
      total=qty*20;
      printf("\nprice:",total);
      break;
case 4:
      printf("\n item:milk shake");
      printf("\n enter the quantity");
      scanf("%d",&qty);
      total=qty*30;
      printf("\nprice:",total);
      break;
case 5:
      printf("sorry, we don't have no more choice");
      
 return 0;
 }
     
     
     
 
