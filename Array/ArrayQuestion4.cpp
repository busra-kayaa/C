#include <stdio.h>
// 10 sayýsýndan büyük tek ve 3’e tam bölünen ilk 5 adet tam sayýyý diziye alan ve büyükten küçüðe yazdýran program kodunu yazýnýz.

main(){
	int sayac=0,k=0;
	int dizi[5];
	for(int i=10;;i++){
		
		if(i%2==1 && i%3==0){
			dizi[k]=i;
			sayac++;
			k++;
				if(sayac==5){
					break;
				}
		}
	}
	
	for(int i=k-1;i>=0;i--)
	{
		printf("%d ",dizi[i]);
	}
	/*
	// Baska bir cozum yolu
	int i,sayac=0,dizi[10];
	for(i=10; ;i++)
	{
		if(i%3==0 && i%2==1)
		{
			dizi[sayac]=i;
			sayac++;
		}
		if(sayac==5)
		break;
	}
	
	for(i=sayac-1;i>=0;i--)
	{
		printf("%d ",dizi[i]);
	}
	*/
}
