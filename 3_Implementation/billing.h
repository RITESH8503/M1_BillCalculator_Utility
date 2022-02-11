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
#include <stdlib.h>
#include <conio.h>
#include <string.h>


//structure declaration
struct Bill_Calculator
{
	
	char name[15];
	int consumer_number;
    int unit;
	int contact [10];
    
};


void data();
void Urban();
void Rural();
void Industrial();
void Farmers();

#endif  