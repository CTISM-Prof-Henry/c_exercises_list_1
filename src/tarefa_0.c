#include <stdio.h>
#include <stdbool.h>

#define PREMISES_SIZE 2
#define CONSEQUENCE_SIZE 4

/**
 * Implementa a função P || Q
 */
bool tarefa_0_exemplo_1(bool p, bool q) {
    if((p == true) || (q == true)) {
        return true;
    }
    return false;
}

/**
 * Implementa a função P || Q. Uma forma alternativa de resolver o exercício.
 * Não existe forma "perfeita"; resolvendo o problema, é a conta!
 */
bool tarefa_0_exemplo_2(bool p, bool q) {
    if(p == true) {
        return true;
    } else if(q == true) {
        return true;
    }
    return false;
}

/**
 * Use esta função para testar seu código.
 *
 * Você não precisa entender o que está acontecendo aqui; apenas rode a função e veja se seu código está certo!
 */
int main() {
    bool ps[PREMISES_SIZE] = {false, true};
    bool qs[PREMISES_SIZE] = {false, true};
    bool answer[CONSEQUENCE_SIZE] = {false, true, true, true};

    bool alright = true;

    printf("Tarefa 0: P || Q\n");
    for(int i = 0; i < PREMISES_SIZE; i++) {
        for(int j = 0; j < PREMISES_SIZE; j++) {
            if(tarefa_0_exemplo_1(ps[i], qs[j]) == answer[i * PREMISES_SIZE + j]) {
                printf("    Correto: ");
            } else {
                printf("  Incorreto: ");
                alright = false;
            }
            printf("%d || %d = %d\n", ps[i], qs[j], answer[i * PREMISES_SIZE + j]);
        }
    }
    return !alright;
}