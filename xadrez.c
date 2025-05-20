#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { 

	// variaveis do menu (switch), do (p/ re-execução caso switch caia em default), e tamanho do tabuleiro.
	// obs: variaveis das peças (linha/coluna) estao nos 'case' para facilitar manupulação

	int opcao, valido = 0;
	int linha = 0, coluna = 0, tamanho = 7;

	// Menu de escolha

	do {
		printf("Menu de movimentos de pecas de xadrez:\n\n");
		printf("1.Peao \n");
		printf("2.Torre \n");
		printf("3.Cavalo \n");
		printf("4.Bispo \n");
		printf("5.Rainha \n");
		printf("6.Rei \n");
		printf("Selecione uma das opcoes:\n");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			// Movimento do peao - pendente
			printf("Movimento do peao:\n");
			printf("Em breve .... (ainda nao solicitado pelo professor)\n\n");
			valido = 1;
			break;

		case 2:
			// Movimento da torre (usando "for")
			printf("Movimento da Torre:\n");
			printf("Se move livremente na horizontal ou vertical\n\n");

			int torre_linha = 3, torre_coluna = 3;


			for (linha = 0; linha < tamanho; linha++) {
				for (coluna = 0; coluna < tamanho; coluna++) {
					if (linha == torre_linha || coluna == torre_coluna)
						printf("T ");
					else
						printf(". ");
				}
				printf("\n");
			}
			valido = 1;
			break;

		case 3:
			// Movimento do cavalo - pendente
			printf("Movimento do cavalo:\n");
			printf("Se move em 'L',\n\n");
			printf("Em breve .... (ainda nao solicitado pelo professor)\n\n");
			valido = 1;
			break;

		case 4:
			// Movimento do bispo (usando "while")
			printf("Movimento do Bispo:\n");
			printf("Se move livremente na diagonal\n\n");
			
			while (linha < tamanho) {
				int coluna = 0;
				while (coluna < tamanho) {
					if (coluna == linha)
						printf("B ");
					else
						printf(". ");
					coluna++;
				}
				printf("\n");
				linha++;
			}
			valido = 1;
			break;

		case 5:
			// Movimento da rainha (usando "do-while")
			printf("Movimento da Rainha:\n");

			do {
				int coluna = 0, rainha_linha = 3, rainha_coluna = 3;
				do {
					if (linha == rainha_linha && coluna == rainha_coluna)
						printf("R ");
					else if (linha == rainha_linha || coluna == rainha_coluna || linha - coluna == rainha_linha - rainha_coluna || linha + coluna == rainha_linha + rainha_coluna)
						printf("* ");
					else
						printf(". ");
					coluna++;
				} while (coluna < tamanho);
				
				printf("\n");
				linha++;
			} while (linha < tamanho);
			valido = 1;
			break;

		case 6:
			// Movimento do rei - pendente

			valido = 1;
			break;

		default:
			printf("Opcao Invalida!\n");
			break;
		}
	} while (!valido);
return 0;
}

//#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//    return 0;
//}
