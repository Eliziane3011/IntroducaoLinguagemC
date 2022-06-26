#include <stdio.h>
#include <stdlib.h>

/* Exercícios disciplina Introdução à Programação Estruturada em C
Tema 3 - comandos de entrada e saída
*/

int main(int argc, char *argv[]) {
	
	int cont = 0;
	cont = cont + 1;
	printf("o valor da variavel cont eh: %d" , cont);
	
	char escolha;
	escolha = 'D';
	escolha = escolha - 2;
	printf("\no valor da variavel escolha eh: %d" , escolha);
/*ficará aquele que estiver duas posições antes na tabela ASCII: 66 = B;*/

	int a, b, c, d;
	a = 10;
	b = a + 1;
	c = b + 1;
	d = c + 1;
	a = b = c = d = 20;
	printf("\no valor da variavel c eh: %d" , c);
/*a última linha atribui valor 20 a todas as variáveis, não importando o valor que tinham previamente.*/

/*	char escolha;
	escolha = a;
	escolha = escolha + 1;
ocorre erro de compilação por não haver variável declarada com o nome a. */

	puts("\nTestando");
	printf("\nHello world");
	printf("\nEliziane de Oliveira");
	printf("\nPrimeira Linha");
	printf("\nSegunda Linha");
	
/*A função printf() e puts() também permite a utilização de variáveis para compor o que será escrito na tela.
Para indicar a posiçao de entrada de conteúdo de variáveis dos tipos int e char utilizam-se, respectivamente,
os símbolos %d e %c. Como a seguir: */

	int e = 10;
	char ch = 'Z';
	printf("\nAtualmente, temos e = %d e ch = %c.", e, ch);
	
	int f, g, h;
	f = 10;
	g = f + 1;
	h = g + 2;
	printf("\nAtualmente, temos f = %d, g = %d, h = %d.", f, g, h); 
	
	int i;
	i = 10;
	printf("\nA variavel i vale %d. Seu sucessor e o %d", i, i + 1);
	
	char ch1, ch2, ch3;
	ch1 = 'H';
	ch2 = 'o';
	ch3 = 'W';
	printf("\n%cell%c %corld.", ch1, ch2, ch3);
	
	float j;
	j = 12.5;
	printf("\nj = %.2f", j);
	
	int k, l, m;
	k = 1;
	l = k + 3;
	m = k;
	printf("\nl = %d e m = %d", l, m);
	printf("\nValor total: %.1f", 9.1415169265);

/*Os símbolos %d, %f e %s são utilizados para compor a frase que a função printf() vai exibir na tela */

 
		
	
	return 0;

}
