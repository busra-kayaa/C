//7.3 dirençli paralel bir devrede eþ deðer direnç 1/Reþ =1/R1 + 1/R2 + 1/R3 þeklinde bulunmaktadýr. Reþ deðerini bulunuz.
//R1, R2, R3 tam sayý alabilirsiniz.
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
