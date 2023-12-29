#include<stdio.h>
#include<stdlib.h>

// 3. y=(3a^2+2b^3+c^4t)/6 fonksiyonuna ait C program kodunu yazýnýz. Örnek: a,b ve c=1 ise y=1 olmalýdýr.
// 3. Write a C program code for the function y = (3a^2 + 2b^3 + c^4t) / 6. For example, when a, b, and c are all equal to 1, y should be 1.

main()
{
	float y=0;
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	y=((3*a*a)+(2*b*b*b)+(c*c*c*c))/6;
	printf("y=%.2f",y);
}

