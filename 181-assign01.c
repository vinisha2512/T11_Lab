/*CP2017 UG1 ASSIGNMENT01
Name of the author:VISMITH V ADAPPA
ROLL NO:201701181
Date: 19/08/2017*/

#include<stdio.h>

int main()
{
	//Problem 1 starts

	int i;
	float f;
	char c,s[18],d;
	printf("Enter the integer ");
	scanf("%d",&i);
	printf("Enter the floating point number ");
	scanf("%f",&f);
	scanf("%c",&d);
	printf("Enter the character ");
	scanf("%c",&c);
	printf("Enter the string ");
	scanf("%s",s);
	printf("The integer is: %d ",i);
	printf("The floating-point number is: %f ",f);
	printf("The character is: %c ",c);
	printf("The string is: %s ",s);
	
	//Problem 1 ends
	
	//Problem 2 starts

	int num1,num2;
	printf("Enter the two numbers\n");
	scanf("%d\n%d",&num1,&num2);
	printf("The sum of the numbers is %d\n",num1+num2);
	printf("The product of the numbers is %d\n",num1*num2);
	printf("The quotient of the numbers is %d\n",num1/num2);
	
	//Problem 2 ends

	//Problem 3 starts

	int i1,i2,i3,i4,i5;
	printf("Enter the three integers\n");
	scanf("%d\n%d\n%d",&i1,&i2,&i3);
	if(i1>i2 && i1>i3)
	{
		i4=i1;
	}
	else if(i2>i1 && i2>i3)
	{
		i4=i2;
	}
	else
	{
		i4=i3;
	}
	if(i1<i2 && i1<i3)
	{
		i5=i1;
	}
	else if(i2<i1 && i2<i3)
	{
		i5=i2;
	}
	else
	{
		i5=i3;
	}
	printf("The largest number is %d and the smallest number is %d\n",i4,i5);
	
	//Problem 3 ends
	
	//Problem 4 starts
	
	char ch;
	int a;
	printf("Enter the character\n");
	scanf("%c",&ch);
	printf("The ASCII VALUE OF entered character is : %d\n",ch);
	printf("Enter the ASCII value\n");
	scanf("%d",&a);
	printf("The character corresponding to the entered ASCII value is %c\n",a);
	
	//Problem 4 ends
	 
	
	//Problem 5 starts
	
	int n1,n2,n3,n4;
	printf("Enter the two numbers \n");
	scanf("%d\n%d",&n1,&n2);
	printf("The input number 1 is %d and number 2 is %d\n",n1,n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("The output number 1 is %d and number 2 is %d ",n1,n2);
	
	//Problem 5 ends
	
	//Problem 6 starts
	
	int n,h,t,u,add;
	printf("Enter the number\n");
	scanf("%d",&n);
	h=n/100;
	t=(n%100)/10;
	u=(n%10);
	add=h+t+u;
	printf("The sum of digits of the three digit number is %d\n",add);
	
	//Problem 6 ends
	
	//Problem 7 starts
	
	int t1=0,t2=1,next,sum=t1+t2;
	printf("The Fibbonacci series is %d,%d,",t1,t2); 
	for(int i=1;i<=3;i++)
	{
		next=t1+t2;
		t1=t2;
		t2=next;
		sum+=next;
		printf("%d,",next); 
	}
	printf("\nThe sum of the Fibbonacci series is %d\n",sum);
	
	//Alternate code for Problem 7
	
	int T1=0,T2=1,T3,SUM;
	T3=T1+T2;
	T4=T2+T3;
	T5=T3+T4;
	SUM=T1+T2+T3+T4+T5;
	printf("The Fibbonacci series is %d,%d,%d,%d,%d",T1,T2,T3,T4,T5);
	printf("\nThe sum of the Fibbonacci series is %d\n",SUM);
	
	
	//Problem 7 ends
	
	return 0;
}
