#include <stdio.h>
//100 sayýsýndan küçük çift ve 3’e bölünmeyen ilk 10 adet tam sayýyý diziye alan ve küçükten büyüðe yazdýran program kodunu yazýnýz.

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
