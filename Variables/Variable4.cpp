#include<stdio.h>
int main(){
	
//Klavyeden girilen Vize1, Vize2 ve Final notlar�na g�re ��rencinin y�l sonu notunu hesaplayan program kodunu yaz�n�z.
	
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
