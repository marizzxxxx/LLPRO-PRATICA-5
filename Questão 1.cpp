#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float minutos, segundos;
	
	printf("Programa que converte Minutos em Segundos:\n");
	
	printf("Digite quantos minutos deseja converter para segundos:");
	scanf("%f", &minutos);
	
	segundos = minutos * 60;
	
	printf("O número de Segundos é: %.2f", segundos);

	return 0;
}
