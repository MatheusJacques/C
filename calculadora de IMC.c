#include <stdio.h>

int main(){
    
    float peso, altura, calculo1, calculo2;
    
    while(1==1){
    printf("\n--------------------------------------------\n");
	printf("OLA! PRECISAREI DE ALGUNS DADOS SEUS:");
	printf("\n--------------------------------------------\n\n");
	printf("Qual sua altura? \n");
	scanf("%f", &altura);
	printf("\n");
	printf("Qual seu peso? \n");
	scanf("%f", &peso);
	printf("\n");
	
	calculo1 = altura*altura;
	calculo2 = peso/calculo1;
	
	if(calculo2 <= 18.5){
		printf("Voce esta abaixo do peso ideal. Seu IMC e %.2f.\n", calculo2);
	}
	else if(calculo2 > 18.5 && calculo2 < 25.0){
		printf("Parabens! Seu IMC e %.2f, voce esta no peso ideal.", calculo2);
	}
	else if(calculo2 > 25.0 && calculo2 < 30.0){
		printf("Voce esta com sobrepeso, seu IMC e %.2f. \n", calculo2);
	}
	else if(calculo2 >30.0 && calculo2 < 40.0){
		printf("Cuidado, voce esta com obesidade. Seu IMC e %.2f. \n", calculo2);
	}
	else if(calculo2 >40.0){
		printf("Voce esta com OBESIDADE MORBIDA! Seu IMC e %.2f, procure um especialista com URGENCIA", calculo2);
	}
		printf("\n\n");
		
	system("PAUSE");
	system("cls");
	}
    
    return 0;
}
