#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, soma, sub, multi, div;
	
	printf("Programa que calcula as 4 operações básicas entre 2 números reais: \n\n\n");
	
	printf("Escolha o primeiro número:");
	scanf("%f", &n1);
	
	printf("Escolha o segundo número:");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	printf("O valor da Soma é: %.2f \n\n", soma);
	printf("O valor da Subtração é: %.2f \n\n", sub);
	printf("O valor da Multiplicação: %.2f \n\n", multi);
	printf("O valor da Divisão: %.2f \n\n", div);
	
	return 0;
}
