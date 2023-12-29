#include<stdio.h>
int main(){
	
	// denklemine göre F (çekim gücü) yi hesaplayýnýz. G= 0.865 alýnýz.
	
	float m1,m2,F,G,r;
	
	printf("birinci kutle degerini gir:");
	scanf("%f",&m1);
	
	printf("ikinci kutleyi gir:");
	scanf("%f",&m2);
	
	printf("aralarindaki uzakligi gir:");
	scanf("%f",&r);
	
	G= 0.865;
	F=(G*m1*m2)/(r*r);
	
	printf("F= %f",F);
	
}
