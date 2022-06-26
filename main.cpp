#include <iostream>

/* Exercícios disciplina introdução à Programação Estruturada em C
Tema 3 módulo 3: Comandos de Entrada de Dados utilizados na programação 
para receber e processar as informações fornecidas pelo usuário */

int main(int argc, char** argv) {
	
	int numero;
	printf("\nEntre com um numero inteiro:");
	scanf("%d", &numero);
	printf("O valor informado pelo usuario foi %d", numero);
	
/*O primeiro é composto pela string que traz o formato de leitura, com %d, %f ou %c entre aspas.
O segundo armazena o valor recebido, sendo o nome dessa varável precedido de &(comercial). */

	float dividendo, divisor;
	printf("\nEntre com o dividendo: ");
	scanf("%f", &dividendo);
	printf("\nEntre com o divisor: ");
	scanf("%f", &divisor);
	printf("A divisao de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor);

/*A função scanf() também pode ler mais de uma variável simultaneamente. Para isso, você precisa 
colocar os símbolos de formato de leitura na quantidade desejada e indicar as variáveis correspondentes,
 que vão armazenar os valores recebidos*/	
	
	char ch1, ch2;
	printf("\nDigite duas letras: ");
	scanf(" %c", &ch1);
	scanf(" %c", &ch2);
	
	printf("\nAs letras inseridas foram %c e %c", ch1, ch2);
	
/*a função escanf() precedida de & indica o 'endereço de', ao passarmos &numero para a função scanf,
estamos informando o endereço na memória da variável número.*/	
	
	
	char inicial;
	int idade;
	printf("\nEntre com sua idade e a sua inicial:");
	scanf("%d %c", &idade, &inicial);
	printf("\nVoce tem %d anos e seu nome comeca com %c\n", idade, inicial);
	
	return 0;
}
