#include <stdio.h>
#include <locale.h>

/*Um programa que solicita e lê um valor inteiro e informa se ele é positivo, 
negativo ou neutro.*/

int main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int num;

    printf("Digite um número: ");
        scanf("%d",&num);

    if(num > 0 )
    {
        printf("É positivo");
    }else
    {
        if(num < 0 )
        {
            printf("É negativo");
        }
        else{
            printf("É neutro");
        }
    }

    return(0);
}
