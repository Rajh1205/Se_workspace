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
   
   fp = fopen(filename,"w");
   printf("\nEnter data\n");
   for(i=0;i<3;i++)
   {
           printf("\n\nEnter A/c No.:\t");  
           scanf("%d",&number);
           
           printf("\n\nEnter Balance.:\t");  
           scanf("%f",&balance);
           
           printf("\n\nEnter Name.:\t");  
           scanf("%s",&name);
           
           fprintf(fp,"%d %s %f",number,name,balance);
   }
   fclose(fp);

   fp = fopen("test","r"); 
  
   while(!feof(fp))
   {
      fscanf(fp,"%d  %s  %f",&number,&name,&balance);
     
   }
  printf("\t%4d\t\t%10s\t\t%6.2f\n",number,name,balance);
  
/*  
    fp=fopen("test","r");
    puts(" \n\n\tNumber\t\tName\t\tBalance");
     while((c=getc(fp))!=EOF)
     {
          fscanf(fp,"%d  %s  %f",&number,name,&balance);
          printf("\t%4d\t\t%10s\t\t%6.2f\n",number,name,balance);
     }
    
  fclose(fp);
  */
    
    getch();
}