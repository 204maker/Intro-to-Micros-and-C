#include <stdio.h>

int main(void)
{
	//declarations
	int myval1,myval2, count =0; 
	char mychar;
	char mystring[15]="dogs or cats?"; 
	int mynums[5] = {11,22,33,44,55};
	char *p_mystring; 					  //declare a pointer to char data
	int *p_mynums = mynums;			  //declare int pointer and assign the address of mynums array
	p_mystring = mystring;				//assign the pointer the adress of of the start of the mystring array
	
	//assignments and other stuff
	mynums[2] = 77;
	p_mynums++;
	myval1 = *p_mynums;
	p_mynums +=2;
	myval2 = *p_mynums;
		while(*p_mystring!='r'){
			   p_mystring+=1;
			   count++;			
		}
	p_mystring-=4;
	mychar = *p_mystring;
	
	printf("count = %x (hex) = %d (dec)", count, count);
	printf("\nmyval1 = %x (hex) = %d (dec)", myval1, myval1);
	printf("\nmyval2 = %x (hex) = %d (dec)", myval2, myval2);
	printf("\nmychar = %x (hex) = %c (char)", mychar, mychar);
	
	int i=0;
	for (i; i<=4;i++)	{
	    printf("\nmynums[%d] = %x, (hex) = %d (dec)", i, mynums[i], mynums[i]);
	}
	return 0;
}	
