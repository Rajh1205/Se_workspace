#include<stdio.h>
#include<conio.h>
void main()
{
      int num ;
      printf("Enter the number: ");
      scanf("%d", &num);
      
      switch(num)
      {
          case 1: printf("\n Monday");
          break;
          
          case 2: printf("\n Tuesday");
          break;
     
          case 3: printf("\n Wednesday");
          break;   
          
          case 4: printf("\n Thursday");
          break;
          
          case 5: printf("\n Friday");
          break;
          
          case 6: printf("\n Saturday");
          break;
          
          case 7: printf("\n Sunday");
          break;
          
          default: printf("\n your selected number is invaid plz select the number between 1 to7 ");
          break;
      }

   getch();
}