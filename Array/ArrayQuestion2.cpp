#include <stdio.h>

/* int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukar�daki say� dizisinde �ift say�lar� tek say�ya (kendinden bir sonraki say�ya) �eviren program kodunu yaz�n�z. 
20->21, 60->61 �eklinde olacakt�r. */

int main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
	
	int eleman = sizeof(sayilar)/sizeof(int);
	printf("Dizinin eleman sayisi = %d\n",eleman);
	
	for(int i=0;i<eleman;i++)
	{
		if(sayilar[i]%2==0){
			printf("%d -> %d\n",sayilar[i],sayilar[i]+1);
		}	
	}	
}
