#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float base, altura, area;
	
	printf("Calcular a Área de um Triângulo:\n");
	
	printf("Valor da Base:");
	scanf("%f", &base);
	
	printf("Valor da Altura:");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("O valor da Área do Triângulo é: %.2f", area);
	return 0;
}
