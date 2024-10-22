// FOOD BILLING SYSTEM --- ASSESSMENT

#include<stdio.h>
main()
{
	int choice, quantity, orders;
	float total_amount, amount ;
	char ch;
	
	while(1)
	{
		printf("-----Welcome to Food Billing System------\n");
		printf("-----------------------------------\n");
		printf(" Food Item Available : \n");
		printf(" 1. Pizza 180Rs./pcs\n");
		printf(" 2. Burger 120Rs./pcs\n");
		printf(" 3. Dhosa 150Rs./pcs\n");
		printf(" 4. Idli 90Rs./pcs\n");
		printf("------------------------------------------\n");
		
		printf("Enter the Choice (1-4) : ");
		scanf("%d ",&choice);
		
		printf("Enter the Quantity : ");
		scanf("%d", &quantity);
		
		if(choice==1)
		{
			printf("You have selected Pizza. \n");
			amount=180*quantity;
			printf("Amount : %.2f\n",amount);
		}	
		else if(choice==2)
		{
			printf("You have selected Burger. \n");
			amount=120*quantity;
			printf("Amount : %.2f\n",amount);
		}
		else if(choice==3)
		{
			printf("You have selected Dhosa. \n");
			amount=150*quantity;
			printf("Amount : %.2f\n",amount);
		}
		else if(choice==4)
		{
			printf("You have selected Idli. \n");
			amount=90*quantity;
			printf("Amount : %.2f\n",amount);
		}
		else 
		{
			printf("Invalid choice. Please try again. \n");	
		}	
	
		total_amount=total_amount+amount;
		orders=orders+quantity;
		
		printf("Total Amount : Rs. %.2f \n",total_amount);
		
		printf("Do you want to place more items (y & n) : ");
		scanf(" %c",&ch);
		
		if (ch=='n' || ch=='N')
		{
			break;
		}
	}
	
	printf("Total Orders : No. %d \n",orders);
	printf("Final Bill : Rs. %2f \n", total_amount);
}
