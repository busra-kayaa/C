#include<stdio.h>
int main(){
	
//Klavyeden girilen Vize1, Vize2 ve Final notlarýna göre öðrencinin yýl sonu notunu hesaplayan program kodunu yazýnýz.
	
	float vize1,vize2,final;
	float sonuc;
	
	printf("vize1 gir:");
	scanf("%f",&vize1);
	
	printf("vize2 gir:");
	scanf("%f",&vize2);
	
	printf("final gir:");
	scanf("%f",&final);
	
	sonuc=((vize1*30)+(vize2*30)+(final*40))/100;
	printf("yil sonu notu:%.3f",sonuc);
}
