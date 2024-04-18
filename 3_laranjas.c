#include <stdio.h>

/*Um programa que solicita e lê a quantidade de maças desejadas, 
calcula e informa o preço a ser pago pelo cliente, considerando os preços definidos 
anteriormente: Um feirista vende suas laranjas a R$ 1,30 por unidade, se forem compradas menos de 
uma dúzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma dúzia. 

*/

int main(){
	
	int quant;
	float valorT;
	
	printf("Insira a quantidade desejada: ");
		scanf("%i",&quant);
	
	if(quant < 12){
		valorT = quant * 1.30;
		printf("Valor a ser pago: R$%f",valorT);
		
	}else{
		valorT = quant * 1.10;
		printf("Valor a ser pago: R$%.1f",valorT);
	}
	
	return(0);
	
}
