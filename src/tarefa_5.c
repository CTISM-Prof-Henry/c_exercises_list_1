#include <stdio.h>
#include <stdbool.h>

#define PREMISES_SIZE 2
#define CONSEQUENCE_SIZE 2


bool tarefa_5(bool p) {
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
    bool answer[CONSEQUENCE_SIZE] = {true, false};

    bool alright = true;

    printf("Tarefa 5: ~P\n");
    for(int i = 0; i < PREMISES_SIZE; i++) {
        if(tarefa_5(ps[i]) == answer[i]) {
            printf("    Correto: ");
        } else {
            printf("  Incorreto: ");
            alright = false;
        }
        printf("~(%d) = %d\n", ps[i], answer[i]);
    }
    return !alright;
}