#include<stdio.h>
#include<stdlib.h>

main(){

int codPedido, quantidade, preco, opcao;
float total = 0;

do{

//lista de opcoes

printf("Lista de frutas:\n");
printf("abacaxi cod 1 = 5,00\n");
printf("maca cod 2 = 1,00\n");
printf("pera cod 3 = 4,00\n");

//inicio da compra

printf("Digite o codigo da fruta desejada: ");
scanf("%d", &codPedido);


switch (codPedido){

        case 1:
            printf("Abacaxi\n");
            preco = 5.00;
            total = preco + preco;
            break;
        case 2:
            printf("Maca\n");
            preco = 1.00;
            total = preco + preco;
            break; 
        case 3:
            printf("Pera\n");
            preco = 4.00;
            total = preco + preco;
            break;     
        
            default:
            printf("\nFruta nao encontrada");
} 
 

 
printf("Desejar adicionar outra frutra? digite 1 para sim, 0 para nao.\n");
scanf("%d", &opcao);


}while( opcao != 0);


printf("\nTotal a pagar: R$ %.2f\n", total);



return 0;


}