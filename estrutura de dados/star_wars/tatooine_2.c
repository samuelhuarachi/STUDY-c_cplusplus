#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _podracer {
    char name[100];
    char color[100];
    unsigned velocity;
} Podracer;

Podracer *create_podracer(const char *name, const char *color, unsigned int velocity) {
    Podracer *podracer;

    podracer = (Podracer *)calloc(1, sizeof(Podracer));
    strcpy(podracer->name, name);
    strcpy(podracer->color, color);
    podracer->velocity = velocity;

    return (podracer);
}

void destroy_podracer(Podracer **podracer_ref) {
    Podracer *podracer;
    podracer = *podracer_ref;
    free(podracer);
    *podracer_ref = NULL;
}

int main(void) {
    puts("Tattoine - 2");

    puts("Creating Anaking podracer...\n");
    Podracer *anakin_podracer = create_podracer("Anakin podracer", "blue and grey", 587);
    printf("Podracer name: %s\n", anakin_podracer->name);
    printf("Podracer color: %s\n", anakin_podracer->color);
    printf("Podracer velocity: %d\n", anakin_podracer->velocity);
    puts("");
    puts("Deleting Anakin podracer...");
    destroy_podracer(&anakin_podracer);

    Podracer **vet_podracer = (Podracer **)calloc(3, sizeof(Podracer *));
    vet_podracer[0] = create_podracer("Podracer 1", "red", 767);
    vet_podracer[1] = create_podracer("Podracer 2", "green", 768);
    vet_podracer[2] = create_podracer("Podracer 3", "blue", 769);
    puts("\nExibindo lista de podracers inscritos:");
    for (int i = 0; i < 3; i++) {
        Podracer *podracer = vet_podracer[i];
        printf("Podracer name: %s", podracer->name);
        puts("");
    }

    // destroying vet podracer
    puts("Destroying podracer list...");
    for (int i = 0; i < 3; i++) {
        destroy_podracer(&vet_podracer[i]);
    }
    free(vet_podracer);
    vet_podracer = NULL;

    return 0;
}