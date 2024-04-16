#include <stdio.h>
#include <locale.h>
//#include <ncurses.h> -> mais completa, porem � preciso compilar e configurar a biblioteca manualmente, caso queira usar no dev c++

void linha(){
	printf("-------------------------------------\n");
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int codigo,quant,valor;
	int responde;
do{
	
	linha();
	printf("\t[TABELA DE PRE�OS]\n");
	linha();
	
	printf("[100] - Cachorro quente........R$8,00\n");
	printf("[101] - Bauru..................R$9,00\n");
	printf("[102] - X-salada...............R$10,00\n");
	printf("[103] - Hamb�rguer.............R$8,00\n");
	printf("[104] - Refrigerante(lata).....R$3,00\n\n");
	
	printf("Insira a op��o desejada (uma por vez): ");
	scanf("%i",&codigo);
	
	printf("Insira a quantidade: ");
	scanf("%i",&quant);
	
	switch(codigo){
		case 100:
			linha();
			printf("Valor total: R$%.1d", quant * 8);
			break;
		case 101:
			linha();
			printf("Valor total: R$%1d",quant * 9);
			break;
		case 102:
			linha();
			printf("Valor total: R$%1d",quant * 10);
			break;
		case 103:
			linha();
			printf("Valor total: R$%1d", quant * 8);
			break;
		case 104:
			linha();
			printf("Valor total: R$%1d",quant * 3);
			break;
		default:
			linha();
			printf("Escolha uma op��o v�lida!\n");
			break;
		
		}

	printf("\n\nDeseja continuar comprando?[1] Sim ou [2]N�o:\n ");//teste usando caracter como tipo de escolha (SIM ou N�O?)
	scanf("%d",&responde);
	system("cls");//o problema do system("cls") � mais est�tico, cumpre com a fun��o mas em � menos "suave" ao limpar a tela em compara��o com o clrscr() da conio.h
	
	
}while(responde == 1);
	
	printf("Obrigada pela prefer�ncia, volte sempre!");

	
	return(0);
	
}
