#include <stdio.h>
#include <stdlib.h>

int main() {

	float salario, reajuste;

	printf("Informe o seu salario: ");
	scanf_s("%f", &salario);

	if (salario < 500)
	{
		reajuste = salario * 0.15;
		printf("\nO salario teve reajuste de %.2f reais\n\n", reajuste);
	}
	else if (salario >= 500 && salario <= 1000)
	{
		reajuste = salario * 0.10;
		printf("\nO salario teve reajuste de %.2f reais\n\n", reajuste);
	}
	else {
		reajuste = salario * 0.5;
		printf("\nO salario teve reajuste de %.2f reais\n\n", reajuste);
	}

	system("PAUSE");
	return(0);
}
