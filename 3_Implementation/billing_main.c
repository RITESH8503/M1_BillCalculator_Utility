/**
 * @file billing_main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "billing.h"
void main()
{ 
    struct Bill_Calculator B;
	data();
	int input;
		
		printf("Select from 1 to 4:\n");
		printf("1. Urban\n");
		printf("2. Rural\n");
        printf("3.Industrial");
        printf("4.Farmers");
		
	
		printf("Enter your choice :\n");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			Urban();
			break;
		case 2:
			Rural();
			break;
        case 3:
            Industrial();
            break;
        case 4:
            Farmers();
            break;
		default:
			printf(" INVALID CHOICE!\n");
			printf(" CHOOSE FROM 1 or 4\n");
		}
		
	 
}