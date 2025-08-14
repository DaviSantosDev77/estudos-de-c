 #include <stdio.h>
 
    int main(){
    
    char nome[50];
    char sobrenome[50];
    char cpf[20];
    
    int idade_numero;
    int idade_texto[10];
    
       printf("\n---- DADOS CADASTRAIS ----\n");
       
       printf("Digite seu nome: ");
       scanf("%s %s", nome, sobrenome);
       
       printf("Digite sua idade: ");
       scanf("%d %s", &idade_numero, idade_texto);
       
       printf("Digite seu CPF: ");
       scanf("%s", cpf);
       
       printf("\nSeu nome eh %s %s, sua idade eh %d %s e seu CPF eh %s.\n", nome, sobrenome, idade_numero, idade_texto, cpf);
    
    return 0;
 }
    
    
