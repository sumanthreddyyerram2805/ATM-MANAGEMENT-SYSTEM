#include<stdio.h>
main()
{
		float balance=0,damount,wamount;
		int choice;
		char ch;
		printf("Welcome to HYDERABAD bank\n");
		printf("Select option\n1.Amount deposit\n2.Amount withdrawl\n3.Balance enquiry\n4.Select proper option");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter Deposit Amount");
				scanf("%f",&damount);
				balance=balance+damount;
				printf("After Deposit Balance amount is %0.2f",balance);
				break;
			case 2:
				if(balance>1000)
				{
					printf("Enter withdrawl amount");
					scanf("%f",&wamount);
						if(balance-wamount>1000)
							{
								printf("Collect Your Cash");
								balance=balance-wamount;
								printf("After withdrawl balance amount is %f",balance);
							}
						else
							{
								printf("Insufficent balance");
								printf("balance is %f",balance);
							}
				}
				break;
				case 3:
					printf("Balance amount is %f",balance);
					break;
				default :
				printf("Select Proper Option");
				break;
		}
		printf("\nDo you want another Transaction (y/n)");
		scanf(" %c",&ch);







}

