#include <stdio.h>

void main(){
    int jogador, computador;

    printf("Escolha uma opcao:\n 0-Pedra\n 1-Papel\n 2-Tesoura\n");
    printf("Opcao do jogador?");
    scanf("%d",&jogador);

    // escolha aleatoria do computador

    srand(time(NULL));
    computador = rand()%3;
    printf("Opcao do computador - %d\n",computador);

    if (computador == jogador)
	    printf("EMPATE");
	else if (computador == 0 && jogador == 1)
	    printf("JOGADOR VENCEU");
	else if (computador == 0 && jogador == 2)
	    printf("COMPUTADOR VENCEU");
	else if (computador == 1 && jogador == 0)
	    printf("COMPUTADOR VENCEU");
	else if (computador == 1 && jogador == 2)
	    printf("JOGADOR VENCEU");
	else if (computador == 2 && jogador == 0)
	    printf("JOGADOR VENCEU");
	else if (computador == 2 && jogador == 1)
	    printf("COMPUTADOR VENCEU");
    else
        printf("Jogada invalida!");
}
