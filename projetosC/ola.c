#include <stdio.h>

/*
 * ===================================================================
 * NOSSO NOVO "ASSISTENTE" ESPECIALISTA
 * ===================================================================
 * Nome: eh_primo
 * Missão: Recebe um número e diz se ele é primo ou não.
 * Ferramentas: Precisa de um 'int numero_para_verificar'.
 * O que devolve: Devolve 1 se for primo (verdadeiro) ou 0 se não for (falso).
*/
int eh_primo(int numero_para_verificar) {
    
    // Um número primo tem que ser maior que 1.
    if (numero_para_verificar <= 1) {
        return 0; // 0 significa "falso", não é primo.
    }

    int contador_de_divisores = 0;

    // A lógica de contar os divisores que você já domina.
    for (int i = 1; i <= numero_para_verificar; i++) {
        if (numero_para_verificar % i == 0) {
            contador_de_divisores++;
        }
    }

    // A decisão final do nosso especialista.
    if (contador_de_divisores == 2) {
        return 1; // 1 significa "verdadeiro", é primo!
    } else {
        return 0; // "falso", não é primo.
    }
}


/*
 * ===================================================================
 * O "CHEFE" MAIN - Agora muito mais limpo e organizado!
 * ===================================================================
*/
int main() {
    printf("--- Números Primos de 1 a 100 (Versão Profissional com Funções) ---\n\n");

    // O chefe só precisa fazer o loop principal.
    for (int i = 1; i <= 100; i++) {
        
        // Para cada número, ele DELEGA a tarefa para o especialista.
        // Ele pergunta: "Ei, assistente eh_primo, o número 'i' é primo?"
        if (eh_primo(i) == 1) { 
            // Se o assistente respondeu 1 (verdadeiro), o chefe imprime o número.
            printf("%d ", i);
        }
    }

    printf("\n\nFim da lista.\n");
    return 0;
}
