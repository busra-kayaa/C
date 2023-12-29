#include<stdio.h>
#include<stdlib.h>

// 2. Klavyeden girilen 3 sayýnýn ortalamasýný bulan program kodunu yazýnýz.
// 2. Write a program code that calculates the average of 3 numbers entered from the keyboard.

main()
{
	float a,b,c;
	printf("Lutfen 3 tane sayi giriniz:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

	printf("a=%f, b=%f, c=%f",a,b,c);
	float ort=0;
	ort=(a+b+c)/3;
	printf("\nortalama=%f",ort);
	
}


