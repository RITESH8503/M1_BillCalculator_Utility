/**
 * @file billing.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "billing.h"


void data()
{
    
	printf("Enter your  name:\n");
	scanf("%s", B.name);
	printf("Enter your consumer number:\n");
	scanf("%d", &B.consumer_number);
    printf("Enter units consumed:\n");
	scanf("%d", &B.unit);
    
    printf("Enter the contact number : \n");
    scanf("%s", B.contact);
    
}

void Urban()
{
    int amount=0,total_Unit;
    B.unit;
    if(B.unit <=30 && B.unit >= 0)
    {
        amount = B.unit * 6.10+50;    // RS 50 fixed charg
    }
    else if(B.unit >= 31 && B.unit <= 100)
    {
        amount = B.unit * 6.40+50;   // RS 50 fixed charg
    }
    else if(B.unit >= 101 && B.unit <= 200)
    {
        amount = B.unit * 7+50;    // RS 50 fixed charg
    }
    else
    {
        amount = B.unit * 8+50;   // RS 50 fixed charg

    printf("****Electricity Bill   TYPE= URBAN ****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unit);
    printf("customer details: %d\n", B.contact);
 
}

void Rural()
{
    int amount=0,total_Unit;
    B.unit;
    if(B.unit <=50 && B.unit >= 0)
    {
        amount = B.unit * 4.80+20; // RS 20 fixed charge
    }
    else if(B.unit >= 50 && B.unit <= 100)
    {
        amount = B.unit * 5.75+20; // RS 20 fixed charg
    }
    else if(B.unit >= 101 && B.unit <= 200)
    {
        amount = B.unit * 6.10+20; // RS 20 fixed charg
    }
    else
    {
        amount = B.unit * 6.40;
    }

    printf("****Electricity Bill   TYPE= RURAL ****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unit);
    printf("customer details: %d\n", B.contact);
 
}


void Industrial()
{
    int amount=0;
    B.unit;
    amount= B.unit*7.75 // fixed rate
    printf("****Electricity Bill   TYPE= industrial ****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unit);
    printf("customer details: %d\n", B.contact);
}
void Farmers()
{
    int amount=0;
    B.unit;
    amount= B.unit*3+15 // fixed rate , rs 15 fixed charge
    printf("****Electricity Bill   TYPE= SUBSIDED FARMER ****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unit);
    printf("customer CONTACT: %d\n", B.contact);
}