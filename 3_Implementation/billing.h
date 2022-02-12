/**
 * @file billing.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//HEADER GUARD
#ifndef __BILLING_H__
#define __BILLING_H__

//EXISTING HEADER

#include <stdio.h>
#include <conio.h>
#include <string.h>



//structure declaration
struct Bill_Calculator
{
	
	char name[15];
	long int consumer_number;
    int unit;
	 long int contact [10];
    
}B;


void data();
void Urban();
void Rural();
void Industrial();
void Farmers();

#endif  