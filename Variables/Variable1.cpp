#include<stdio.h>
#include<stdlib.h>

// 1. y= 3x^2 fonksiyonuna ait C program kodunu yaz�n�z. �rnek: x=2 ise y=12 olmal�d�r.
// 1. Write a C program code for the function y = 3x^2. For example, when x = 2, y should be 12.

main()
{
	int y,x;
	printf("Lutfen x sayisi girin:");
	scanf("%d",&x);
	y=(3*x*x);
	printf("y= %d",y);
}
