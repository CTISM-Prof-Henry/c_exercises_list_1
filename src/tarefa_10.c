#include <stdio.h>
#include <stdbool.h>

#define PREMISES_SIZE 2
#define CONSEQUENCE_SIZE 16


bool tarefa_4(bool p, bool q, bool r, bool s) {
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
    bool rs[PREMISES_SIZE] = {false, true};
    bool ss[PREMISES_SIZE] = {false, true};
    bool answer[CONSEQUENCE_SIZE] = {
            true, true, true, false,
            true, true, true, false,
            true, true, true, false,
            false, false, false, false
    };

    bool alright = true;

    printf("Tarefa 10: ~((P && Q) || (R && S))\n");
    for(int i = 0; i < PREMISES_SIZE; i++) {
        for(int j = 0; j < PREMISES_SIZE; j++) {
            for(int k = 0; k < PREMISES_SIZE; k++) {
                for(int l = 0; l < PREMISES_SIZE; l++) {
                    if(tarefa_4(ps[i], qs[j], rs[k], ss[l]) == answer[
                            i * PREMISES_SIZE * PREMISES_SIZE * PREMISES_SIZE +
                            j * PREMISES_SIZE * PREMISES_SIZE +
                            k * PREMISES_SIZE +
                            l
                    ]
                            ) {
                        printf("    Correto: ");
                    } else {
                        printf("  Incorreto: ");
                        alright = false;
                    }
                    printf(
                            "~((%d && %d) || (%d && %d)) = %d\n",
                            ps[i], qs[j], rs[k], ss[l], answer[
                                    i * PREMISES_SIZE * PREMISES_SIZE * PREMISES_SIZE +
                                    j * PREMISES_SIZE * PREMISES_SIZE +
                                    k * PREMISES_SIZE +
                                    l
                            ]
                    );
                }
            }
        }
    }
    return !alright;
}