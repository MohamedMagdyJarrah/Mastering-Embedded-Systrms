#include <stdio.h>
#include <stdlib.h>


/***********************************************************************************/
/************************* C Program to Print a Sentence ***************************/
/***********************************************************************************/
void EX1(void)
{
	printf("C Programming");
}

/***********************************************************************************/
/**************** C Program to Print a Integer Entered by a User********************/ 
/***********************************************************************************/
void EX2(void)
{
	int x;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdout);
	printf("You entered: %d",x);
}

/***********************************************************************************/
/************************* C Program to Add Two Integers ***************************/
/***********************************************************************************/
void EX3()
{
	int x,y;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	fflush(stdout);
	printf("Sum = %d",x+y);
}

/***********************************************************************************/
/*************** C Program to Multiply two Floating Point Numbers ******************/
/***********************************************************************************/
void EX4()
{
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	fflush(stdout);
	printf("Product = %f",x*y);
}

/***********************************************************************************/
/**************** C Program to Find ASCII Value of a Character *********************/
/***********************************************************************************/
void EX5()
{
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	fflush(stdout);
	printf("ASCII value of %c = %d",x,x);
}

/***********************************************************************************/
/**************************** Code to Swap Two Numbers *****************************/
/***********************************************************************************/
void EX6()
{
	float x,y,temp;
	printf("Enter value of x: ");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdout);
	printf("Enter value of y: ");
	fflush(stdout);
	scanf("%f",&y);
	fflush(stdout);

	temp = x;
	x = y;
	y = temp;

	printf("After swapping, value of x = %f\nAfter swapping, value of y = %f",x,y);
}

/***********************************************************************************/
/*************** Code to Swap Two Numbers without temp variable ********************/
/***********************************************************************************/
void EX7()
{
	float x,y;
	printf("Enter value of x: ");
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdout);
	printf("Enter value of y: ");
	fflush(stdout);
	scanf("%f",&y);
	fflush(stdout);

	x = x+y;
	y = x-y;
	x = x-y;

	printf("After swapping, value of x = %f\nAfter swapping, value of y = %f",x,y);
}

int main(void) {

	return 0;
}
