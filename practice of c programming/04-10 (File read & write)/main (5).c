#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *fp;
   int i,number;
   float balance;
   char ch,name[30],filename[10];
   
  printf("Enter the file name:-");
  gets(filename);
  
   fp=fopen(filename,"w");
      printf("\nEnter data\n");
      for(i=0;i<3;i++)
      {
           printf("\n\nEnter A/c No.:\t");  scanf("%d",&number);
           printf("\nEnter Name:\t");  scanf("%s",&name);
           printf("\nEnter Balance:\t");  scanf("%f",&balance);
           fprintf(fp,"%4d%10s%6.2f",number,name,balance);
      }

      fclose(fp);

 /* fp = fopen(filename,"r"); 
  
  while(!feof(fp))
  {
       fscanf(fp,"%d  %s  %f",&number,name,&balance);
        printf("\t %d %s %f\n",number,name,balance);
     
  }
 

    
  fclose(fp);     */
  
    
    getch();
}