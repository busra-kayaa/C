#include <stdio.h>
//100 say�s�ndan k���k �ift ve 3�e b�l�nmeyen ilk 10 adet tam say�y� diziye alan ve k���kten b�y��e yazd�ran program kodunu yaz�n�z.

int main(){
	
	int dizi[10],sayac=0;
	
	for(int i=99;;i--)
	{
		if(i%2==0 && i%3!=0){
			dizi[sayac]= i;
			sayac++;
			
			if(sayac==10){
				break;
			}
		}
	}
	for(int i=sayac-1; i>=0; i--){
		printf("%d ",dizi[i]);
	}
}
