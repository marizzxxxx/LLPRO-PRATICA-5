#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valor, cafe, troco;
	
	printf("Maquina de caf�\n\n\n");
	
	printf("Digite o valor x5:");
	scanf("%d", &valor);
	
	cafe = valor/7;
	troco = valor%7;
	
	printf("O cliente comprou %d caf�s e perdeu %d de troco", cafe, troco);
	
	return 0;
}
