#include <stdio.h>

/* int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukar�daki say� dizisinde indisleri tek olan say�lar�n ortalamas�n� bulan ve ortalamadan b�y�k olan
(sadece tek indisli) say�lar� ekrana yazd�ran program kodunu yaz�n�z.
Not: indis 0 ile ba�lar. 20 say�s� 0. �ndistedir. 60, 42, 24 gibi say�lar i�leme tabi tutulmal�d�r. */

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
