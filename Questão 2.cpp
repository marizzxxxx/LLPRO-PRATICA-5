#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, soma, sub, multi, div;
	
	printf("Programa que calcula as 4 opera��es b�sicas entre 2 n�meros reais: \n\n\n");
	
	printf("Escolha o primeiro n�mero:");
	scanf("%f", &n1);
	
	printf("Escolha o segundo n�mero:");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	printf("O valor da Soma �: %.2f \n\n", soma);
	printf("O valor da Subtra��o �: %.2f \n\n", sub);
	printf("O valor da Multiplica��o: %.2f \n\n", multi);
	printf("O valor da Divis�o: %.2f \n\n", div);
	
	return 0;
}
