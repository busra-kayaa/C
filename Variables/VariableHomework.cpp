#include <stdio.h>
int main() 
{
	double OgrenciNumarasi= 221.229007, denklem=0, yv;
	int ondalik = (OgrenciNumarasi-221)*1000000+1; //ondalik kismi tam yaptik.
	//printf(" OgrenciNumarasi=%.6f",OgrenciNumarasi);
	//printf("\n OgrenciNumarasi ondalik=%d",ondalik);
	
	int toplam;
	
	toplam=ondalik % 10 ;
	ondalik=ondalik/10 ;
	
	toplam =toplam+(ondalik%10);
	ondalik=ondalik/10 ;
	
	toplam =toplam+(ondalik%10);
	ondalik=ondalik/10 ;
	
	toplam =toplam+(ondalik%10);
	ondalik=ondalik/10 ;
	
	toplam =toplam+(ondalik%10);
	ondalik=ondalik/10 ;
	
	toplam =toplam+(ondalik%10);
	ondalik=ondalik/10 ;
	
	toplam =toplam+(ondalik%10);
	ondalik=ondalik/10 ;
	
	printf("\n z=%d olarak hesaplandi.\n", toplam);

	//printf("denklem:0.1<=[(x*x*x-0.1*y*y-toplam)/5]<=0.2\n");

	int x=0;
	int y=0;
	
	x = x + 1; // x 1den basladi
	denklem=(x*x*x - 0.1*y*y - toplam)/5;
	printf("\n x=%d icin (%d-%d)/5 = %.1f",x,x*x*x,toplam, denklem);
	
	x = x + 1;
	denklem=(x*x*x - 0.1*y*y - toplam)/5;
	printf("\n x=%d icin (%d-%d)/5 = %.1f",x,x*x*x,toplam, denklem);
	
	x = x + 1;
	denklem=(x*x*x - 0.1*y*y - toplam)/5;
	printf("\n x=%d icin (%d-%d)/5 = %.1f",x,x*x*x,toplam, denklem);

	x = x + 1;
	denklem=(x*x*x - 0.1*y*y - toplam)/5;
	printf("\n x=%d icin (%d-%d)/5 = %.1f",x,x*x*x,toplam, denklem);

	printf("\n\n x=%d oldugunda elde edilen sonuc araligindan cok uzaklasildigindan x %d olarak alinacaktir.\n", x, x-1);

	x-=1;
	y = y + 1; // y 1 den basladi
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);
	
	y = y + 1;   
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);

	y = y + 1; 
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);

	y = y + 1; 
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);

	y = y + 1; 
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);

	y = y + 1; 
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);

	y = y + 1; 
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);

	y = y + 1; 
	yv = 0.1*y*y;
	denklem=(x*x*x - yv - toplam)/5;
	printf("\n y=%d icin; (%d-%.1f-%d)/5 ise Sonuc: %.2f",y,x*x*x,yv,toplam, denklem);
	
	printf("\n\n Sonuc olarak x = %d, y = %d Toplam 20 durumunda denklem saglanmistir.", x, y);
}
