//7.3 diren�li paralel bir devrede e� de�er diren� 1/Re� =1/R1 + 1/R2 + 1/R3 �eklinde bulunmaktad�r. Re� de�erini bulunuz.
//R1, R2, R3 tam say� alabilirsiniz.
#include <stdio.h>
int main()
{

	float R1,R2,R3,Res;
	
	printf("R1 direnci gir:");
	scanf("%f",&R1);
	
	printf("R2 direnci gir:");
	scanf("%f",&R2);
	
	printf("R3 direnci gir:");
	scanf("%f",&R3);
	
	Res=1/((1/R1)+(1/R2)+(1/R3));
	printf("Res=%f",Res);
}
