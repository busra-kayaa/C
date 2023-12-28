#include <stdio.h>

/* int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarýdaki sayý dizisinde indisleri tek olan sayýlarýn ortalamasýný bulan ve ortalamadan büyük olan
(sadece tek indisli) sayýlarý ekrana yazdýran program kodunu yazýnýz.
Not: indis 0 ile baþlar. 20 sayýsý 0. Ýndistedir. 60, 42, 24 gibi sayýlar iþleme tabi tutulmalýdýr. */

int main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	
	int diziUzunluk= sizeof(sayilar)/sizeof(int);
	printf("Dizinin eleman sayisi = %d\n",diziUzunluk);
	int toplam=0,sayac=0,ortalama=0;
	
	for(int i=0;i<diziUzunluk;i++)
	{
		if(i%2==1){
			printf("%d ",sayilar[i]);
			toplam+=sayilar[i];
			sayac++;
		}
	}
	ortalama=toplam/sayac;
	printf("\nortalama = %d\n",ortalama);
	
	printf("Tek indisli ve ortalamadan buyuk sayilar = ");
	for(int i=0;i<diziUzunluk;i++)
	{
		if(i%2==1 && sayilar[i]>ortalama){
			printf("%d ",sayilar[i]);
		}
	}	
}
