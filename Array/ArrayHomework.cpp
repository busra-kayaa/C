#include <stdio.h>
main()
{
	int dizi[]= {2, -2, 7, 3, 4, -5, 3, 1};
	int eleman= sizeof(dizi)/ sizeof(int);
	printf("Dizinin eleman sayisi= %d\n",eleman);
	int k=0;
	int sayac;
	int sayi;
	
	printf("\n");
	printf("Ilk Durum: Dizi= ");
	for(int i=0;i<eleman;i++){
		printf("%d ",dizi[i]);
		if(i==eleman-1) printf("\n");
	}
	for(int i=0; i<eleman; i++)
	{
		if(dizi[i]<0){
			printf("%d sayisi negatiften pozitife donduruluyor.\n",dizi[i]);
			dizi[k]=dizi[i]*-1;
		}
		else{
			dizi[k]=dizi[i];
		}
		k++;
	}
	printf("Son Durum: Dizi= ");
	for(int i=0;i<eleman;i++){
		printf("%d ",dizi[i]);
	}
	
	
	
	for(int k=eleman; k>=1 ; k--)
	{
		sayac=0;
		for(int l=0 ; l<eleman ; l++){
			if(k<=dizi[l]){
				sayac++;
			}
		}
		
		if(k<=sayac)
		{
			printf("\n1. Durum sonucu: %d ",k);
			break;
		}
	}
	printf("\n");
	int sayiDizi[eleman];
	int a=0;
	for(int i=0; i<eleman; i++)
	{
		if(dizi[i]<0){
			printf("%d sayisi negatiften pozitife donduruluyor.\n",dizi[i]);
			sayiDizi[a]=dizi[i]*-1;
		}
		else{
			sayiDizi[a]=dizi[i];
		}
		a++;
	}
	printf("\nFarkli bir diziye aktarilmis hali: Dizi= ");
	for(int i=0;i<eleman;i++){
		printf("%d ",sayiDizi[i]);
	}
	
	int temp,i,j;
	for(i=1;i<eleman;i++)
    {
        for(j=0;j<eleman-i;j++)
        {
            if(sayiDizi[j]>sayiDizi[j+1])
            {
                temp=sayiDizi[j+1];
                sayiDizi[j+1]=sayiDizi[j];
                sayiDizi[j]=temp;
            }   
        }       
    }
	int sayac2=0;
	printf("\nYerlerinin degismis hali: Dizi= ");
	for(int i=0;i<eleman;i++){
		printf("%d ",sayiDizi[i]);
	}
	
		for(int k=eleman; k>=1 ; k--)
	{
		sayac2=0;
		for(int l=0 ; l<eleman ; l++){
			if(k<=sayiDizi[l]){
				sayac2++;
			}
		}
		
		if(k<=sayac2)
		{
			printf("\n2. Durum sonucu: %d ",k);
			break;
		}
	}
	printf("\n");
	if(sayac==sayac2)
	{
		printf("\n3. durum: 1 ve 2. durumlardaki sonuclar esittir. Sonuc dogru.");
	}
	
}
