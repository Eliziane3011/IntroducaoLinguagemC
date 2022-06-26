#include <iostream>

/* Exerc�cios disciplina introdu��o � Programa��o Estruturada em C
Tema 3 m�dulo 3: Comandos de Entrada de Dados utilizados na programa��o 
para receber e processar as informa��es fornecidas pelo usu�rio */

int main(int argc, char** argv) {
	
	int numero;
	printf("\nEntre com um numero inteiro:");
	scanf("%d", &numero);
	printf("O valor informado pelo usuario foi %d", numero);
	
/*O primeiro � composto pela string que traz o formato de leitura, com %d, %f ou %c entre aspas.
O segundo armazena o valor recebido, sendo o nome dessa var�vel precedido de &(comercial). */

	float dividendo, divisor;
	printf("\nEntre com o dividendo: ");
	scanf("%f", &dividendo);
	printf("\nEntre com o divisor: ");
	scanf("%f", &divisor);
	printf("A divisao de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor);

/*A fun��o scanf() tamb�m pode ler mais de uma vari�vel simultaneamente. Para isso, voc� precisa 
colocar os s�mbolos de formato de leitura na quantidade desejada e indicar as vari�veis correspondentes,
 que v�o armazenar os valores recebidos*/	
	
	char ch1, ch2;
	printf("\nDigite duas letras: ");
	scanf(" %c", &ch1);
	scanf(" %c", &ch2);
	
	printf("\nAs letras inseridas foram %c e %c", ch1, ch2);
	
/*a fun��o escanf() precedida de & indica o 'endere�o de', ao passarmos &numero para a fun��o scanf,
estamos informando o endere�o na mem�ria da vari�vel n�mero.*/	
	
	
	char inicial;
	int idade;
	printf("\nEntre com sua idade e a sua inicial:");
	scanf("%d %c", &idade, &inicial);
	printf("\nVoce tem %d anos e seu nome comeca com %c\n", idade, inicial);
	
	return 0;
}
