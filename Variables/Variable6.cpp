#include<stdio.h>
int main(){
	
	// denklemine g�re F (�ekim g�c�) yi hesaplay�n�z. G= 0.865 al�n�z.
	
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
