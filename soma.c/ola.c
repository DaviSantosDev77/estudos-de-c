#include <stdio.h>

int main()  {
         
        char nomes[15] [50];
         
        float precos[15];
         
        float soma_total = 0;
       
       printf(" - - - Calculadora de Compras Inteligente - - - \n\n");
       
       for (int i = 0; i < 15;  i++) {
              printf("Digite o nome do produto %d:  ", i + 1); 
              scanf(" %[^\n]", nomes[i]);
              
              printf("Digite o preco do(a) %s:  ", nomes[i]);
              
              scanf("%f", &precos[i]);
              
              soma_total = soma_total + precos[i];
              
              printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
     }         
              printf(" ====== RESUMO DA COMPRA  ======\n ");
     
              
        for (int i = 0; i < 3;  i++) {
               printf("Produto %d: %s - R$ %.2f\n", i + 1, nomes[i], precos[i]);
     }
     printf("==================================\n");
     
        printf("TOTAL DA COMPRA: R$ %.2f\n", soma_total);
        
           printf("==================================\n");    
             
     	return 0; 
     }