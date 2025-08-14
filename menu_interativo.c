 #include <stdio.h> 
 
 int main () {
 	 int opcao;
 	 
 	 do {
 	 	printf("\n--- MENU PRINCIPAL DANI BURGUER ---\n");
 	 	printf("1 - X-Burguer(pao arabe ou bola, carne, queijo e molho.)\n");
 	 	printf("2 - X-Calabresa(pao arabe ou bola, calabresa, queijo e molho.)\n");
 	 	printf("3 - X-Salada(pao arabe ou bola, tomate, alface, cebola e carne.)\n");
 	 	printf("4 - X-Tudo(pao arabe ou bola, calabresa, carne, queijo, presunto, tomate, alface e molho.)\n");
 	 	printf("0 - Nao obrigado\n");
 	 	printf("Escolha uma opcao: ");
 	 	scanf("%d", &opcao);
 	
 	 	if (opcao == 1) {
 	 		printf("Ola, X-Burgue esta saindo por R$ 10,99!\n");
 	 	} 
		else if (opcao == 2) {
 	 		printf("Ola, X-Calabresa esta saindo por R$ 14,99!\n");
		} 
		else if (opcao == 3) {
 	 		printf("Ola, X-Salada esta saindo por R$ 15,99!\n");
	   	} 
		else if (opcao == 4) {
 	 		printf("Ola, X-Tudo esta saindo por R$ 19,99!\n");
	   	} 
		else if (opcao != 0) {
			printf("Opcao invalida, tente novamente.\n");
		}
		
    } while (opcao != 0);
    
    printf("\nObrigado pelo seu tempo. Volte sempre!\n");
    
    return 0 ;
 }
