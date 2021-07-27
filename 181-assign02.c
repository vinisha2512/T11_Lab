/*CP2017 UG1 ASSIGNMENT02
Name of the author:VISMITH V ADAPPA
ROLL NO:201701181
Date: 26/08/2017*/

#include<stdio.h>

int main()
{
	//Problem 1 starts
	
	float tc,tf;
	printf("Enter the temperature in Celsius\n");
	scanf("%f",&tc);
	tf=(tc*9/5)+32;
	printf("The temperature entered in Celsius is %f and converted in Fahrenheit is %f\n",tc,tf);
	
	//Problem 1 ends
	
	//Problem 2 starts
	
	int a,b,c;
	printf("Enter three integers\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	printf("The entered values of a,b and c are %d,%d and %d respectively\n",a,b,c);
	if(c>5)
	{
		a=(b++)+1;
		b=(a++)*2;
		c=++b;
	}
	else
	{
		c=(++b)+1+(++a);
	}
	printf("The operated values of a,b and c are %d,%d and %d respectively\n",a,b,c);
	
	//Problem 2 ends
	
	//Problem 3 starts
	
	int d,e,f,i4,i5;
	printf("Enter three integers\n");
	scanf("%d\n%d\n%d",&d,&e,&f);
	f=d/e*f/5%++d*2-e++*3;
	if(d>e && d>f)
	{
		i4=d;
	}
	else if(e>d && e>f)
	{
		i4=e;
	}
	else
	{
		i4=f;
	}
	if(d<e && d<f)
	{
		i5=d;
	}
	else if(e<d && e<f)
	{
		i5=e;
	}
	else
	{
		i5=f;
	}
	printf("The largest number is %d and the smallest number is %d\n",i4,i5);
	
	//Problem 3 ends
	
	//Problem 4 starts
	
	int m,n,o,op;
	printf("Enter three integers\n");
	scanf("%d\n%d\n%d",&m,&n,&o);
	printf("The entered values of m,n and o are %d,%d and %d respectively\n",m,n,o);
	op=++m+o+++n---++o;
	printf("The operated values of m,n and o are %d,%d and %d respectively\n",m,n,o);
	
	//Problem 4 ends
	
	//Problem 5 starts
	
	int s1=978;
	float s2=3.142;
	char s[20];
	printf("Enter String\n");
	scanf("%s",s);
	printf("The first 4 characters of input string is %c%c%c%c \n",s[0],s[1],s[2],s[3]);
	printf("The size of integer 978 is %lu\n",sizeof(s1));
	printf("The size of floating point number 3.142 is %lu\n",sizeof(s2));
	s2-=(int)s2;
	printf("The decimal part of floating point number 3.142 is %f\n",s2);

	
	//Problem 5 ends
	
	//Problem 6 starts
	
	float x=20,y=10,z=15,k=5,out;
	printf("The values of x,y,z and k before execution are %f,%f,%f and %f respectively\n",x,y,z,k);
	out=x+y*z/k;
	x=y++*x+2/3.0/2;
	y=++y+x*2+4;
	z=y--+x/2;
	k=++z*x+y*z/2;
	printf("The values of x,y,z and k after execution are %f,%f,%f and %f respectively\n",x,y,z,k);
	
	//Problem 6 ends
	return 0;
}
	
