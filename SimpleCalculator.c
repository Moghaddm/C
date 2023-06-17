#include <stdio.h>
#include <stdlib.h>

double addition(double,double);
double substraction(double,double);
double Multiplication(double,double);
double Divition(double,double);

int main()
{
	double first,second;
	char ch;
	do
	{
	printf("Enter Your Operator : ");
	scanf(" %c",&ch);
	
	 if(ch == 'x')
	 {
		printf("Done !");	 
	 	exit(0);
	 }
	 
	printf("Enter Your Operands Like ' X Y ' :\t");
	scanf("%lf %lf",&first,&second);
	  
	
		switch(ch)
		{
			case '+' :
			addition(first,second);
			break;
			case '-' : 
			substraction(first,second);
			break;
			case '*' : 
			Multiplication(first,second);
			break;
			case  '/' : 
			Divition(first,second);
			break;
			default : 
			printf("Your Operator Does Not Exist ! \n");
		}
	} while(ch != 'x');
	
	return 0;
}
double addition(double first,double second)
{
	printf("%lf + %lf and Your Answer is %.3lf\n",first,second,first+second);
}
double substraction(double first,double second)
{
	printf("%lf - %lf and Your Answer is %.3lf\n",first,second,first-second);
}
double Multiplication(double first,double second)
{
	printf("%lf * %lf and Your Answer is %.3lf\n",first,second,first*second);
}
double Divition(double first,double second)
{
	printf("%lf / %lf and Your Answer is %.3lf\n",first,second,first/second);
}

