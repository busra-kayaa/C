#include <stdio.h>
/* int sayilar[] = { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 };
Yukar�da verilen tam say� dizisinde say�n�n ba�tan ka��nc� s�rada oldu�unu bulan 
(yoksa �Bu say� dizide bulunmamaktad�r� yazd�r�lacakt�r) program kodunu yaz�n�z.*/

int main()
{
	int sayilar[] = { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 };
	
	int eleman = sizeof(sayilar)/sizeof(int);
	printf("Dizinin eleman sayisi = %d\n",eleman);
	
	int sayi;
	printf("Dizide hangi sayiyi ariyorsunuz? ");
	scanf("%d",&sayi);
	
	for(int i=0;i<eleman;i++){
		if(sayilar[i]==sayi){
			printf("%d sayisi bastan %d. siradadir.",sayi,i+1);
			return 0;
		}
	}
	
	for(int i=0;i<eleman;i++){
		if(sayilar[i]!=sayi){
			printf("Bu sayi dizide bulunmamaktadir.");
			return 0;
		}
	}	
}
