#include <stdio.h>
#include <stdbool.h>

#define PREMISES_SIZE 2
#define CONSEQUENCE_SIZE 8


bool tarefa_1(bool p, bool q, bool r) {
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
    bool rs[PREMISES_SIZE] = {false, true};
    bool answer[CONSEQUENCE_SIZE] = {false, false, false, false, false, true, true, true};

    printf("P && (Q || R)\n");
    for(int i = 0; i < PREMISES_SIZE; i++) {
        for(int j = 0; j < PREMISES_SIZE; j++) {
            for(int k = 0; k < PREMISES_SIZE; k++) {
                if(tarefa_1(ps[i], qs[j], rs[k]) == answer[i * PREMISES_SIZE * PREMISES_SIZE + j * PREMISES_SIZE + k]) {
                    printf("  Correto: ");
                } else {
                    printf("Incorreto: ");
                }
                printf(
            "%d && (%d || %d) = %d\n",
                    ps[i], qs[j], rs[k], answer[i * PREMISES_SIZE * PREMISES_SIZE + j * PREMISES_SIZE + k]
                );
            }
        }
    }
    return 0;
}