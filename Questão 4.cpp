#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float peso, altura, imc;
	
	printf("Programa que calcula IMC:\n\n\n");
	
	printf("Digite o peso:");
	scanf("%f", &peso);
	
	printf("Digite a altura:");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura);
	
	printf("O IMC é igual a: %.2f", imc);

	return 0;
}
