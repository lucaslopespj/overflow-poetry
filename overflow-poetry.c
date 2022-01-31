#include <stdio.h>

int leiaABagaca(int entendeu) {
    if (entendeu == 0)
        return 0;
    return 1;
}

int main() {
    int i, entendeu;

    i = entendeu = 0;

    while (entendeu == 0) {
        entendeu = leiaABagaca(!(++i));
    }

    printf("Agora aprendi!\n");
    return 0;
}
