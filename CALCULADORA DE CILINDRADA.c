#include <stdio.h>

int main(){
	
	float diam, cur, raio, ncili, calculo1, result;
	const float pi = 3.141592;
	
	while(1==1){
	printf("\n  ___________________________________\n\n");
	printf("  CALCULADORA DE CILINDRADA\n");
	printf("  ___________________________________\n\n");
	
	printf("  Diametro do pistao:  ");
	scanf("%f", &diam);
	printf("  Curso do pistao:     ");
	scanf("%f", &cur);
	printf("  Numero de cilindros: ");
	scanf("%f", &ncili);
	
	raio = diam / 2;
	calculo1 = raio * raio * pi * cur / 1000;
	result = calculo1 * ncili;
	
	printf("\n");
	printf("  O motor possui %.2f cilindradas.\n\n", result);
	
	system("pause");
	system("cls");
	}

	return 0;
}
