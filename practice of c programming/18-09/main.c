#include<stdio.h>
#include<conio.h>

int counting(int choice,int quantity)
{
    int amount = 0;
    
    switch(choice)
    {
        case 1: amount = 180 * quantity;
        break;
        
        case 2: amount = 100 * quantity;
        break;
    }
    
    return amount;
}

void main()
{
    int choice,quantity,amount=0, total=0;
    char more;
    
    do
    {
        printf("\n----MENU----");
        printf("\n1. Pizza price = 180rs/pcs ");
        printf("\n2. Burger price = 100rs/pcs ");
        printf("\n3. Dosa price = 120rs/pcs ");
        printf("\n4. Idli price = 50rs/pcs ");
        printf("\n Plz Enter your choice:   ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            
            case 1: 
                printf("\n You have selected Pizza.");
                printf("\n Enter the quantity: ");
                scanf("%d",&quantity);
                printf("%d",counting(choice,quantity));
                break;
            
            case 2: 
                printf("\n You have selected Burger.");
                printf("\n Enter the quantity: ");
                scanf("%d",&quantity);
                printf("%d",counting(choice,quantity));
                break;
                
            case 3: 
                printf("\n You have selected Dosa.");
                printf("\n Enter the quantity: ");
                scanf("%d",&quantity);
                printf("%d",counting(choice,quantity));
                break;
                
            case 4: 
                printf("\n You have selected Idli.");
                printf("\n Enter the quantity: ");
                scanf("%d",&quantity);
                printf("%d",counting(choice,quantity));
                break;
        }
        
        
    } while(more=='Y' || more=='y');
    
    getch();
}