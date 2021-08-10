#include <stdio.h>
#include <stdbool.h>

#define PREMISES_SIZE 2
#define CONSEQUENCE_SIZE 4


bool tarefa_7(bool p, bool q) {
    // TODO desenvolva aqui seu código
    return false;
    // TODO desenvolva aqui seu código
}


/**
 * Use esta função para testar seu código.
 *
 * Você não precisa entender o que está acontecendo aqui; apenas rode a função e veja se seu código está certo!
 */
int main() {
    bool ps[PREMISES_SIZE] = {false, true};
    bool qs[PREMISES_SIZE] = {false, true};
    bool answer[CONSEQUENCE_SIZE] = {true, true, true, false};

    bool alright = true;

    printf("Tarefa 7: ~P || ~Q\n");
    for(int i = 0; i < PREMISES_SIZE; i++) {
        for(int j = 0; j < PREMISES_SIZE; j++) {
            if(tarefa_7(ps[i], qs[j]) == answer[i * PREMISES_SIZE + j]) {
                printf("    Correto: ");
            } else {
                printf("  Incorreto: ");
                alright = false;
            }
            printf("~(%d) || ~(%d) = %d\n", ps[i], qs[j], answer[i * PREMISES_SIZE + j]);
        }
    }
    return !alright;
}