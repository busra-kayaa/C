#include<stdio.h>
int main(){
	//Klavyeden girilen 3 basamaklı sayının (soldan) 1. 2. ve 3. basamağını (Basamak Değerlerini) bulan program kodunu yazınız
	
	int sayi ,bas1,bas2,bas3;
	
	printf("3 basamakli sayi gir:");
	scanf("%d",&sayi);
	
	bas3=sayi%10;
	sayi=sayi/10;
	
	bas2=sayi%10;
	sayi=sayi/10;
	
	bas1=sayi%10;
	sayi=sayi/10;
	
	printf("1.bas=%d  2.bas=%d  3.bas=%d  ",bas1,bas2,bas3);
	printf("\n1.basamak degeri=%d \n2.basamak degeri=%d \n3.basamak degeri=%d ",bas1*100,bas2*10,bas3);

}
