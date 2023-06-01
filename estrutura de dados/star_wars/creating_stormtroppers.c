#include <stdio.h>

void modifyTrooperForMaxLevel(int *p) {
    printf("Estamos com o trooper: %d\n", *p);
    puts("Modificando o trooper, promovendo para trooper nível máximo...");
    *p = 1000;
}

int main() {

    int troppers[100];

    for (int i = 0; i < 100; i++)
    {
        troppers[i] = i + 100;
    }
    
    printf("First trooper value: %d\n\n", troppers[0]);
    printf("Last trooper value: %d\n\n", troppers[99]);

    modifyTrooperForMaxLevel(&troppers[0]);

    printf("O primeiro trooper possui nível: %d\n", troppers[0]);

    return 0;
}