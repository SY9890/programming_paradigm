#include <cstdio>
#include <cstring>

#include "pokemon.h"

/**
 * Main program
 */
int main() {
    printf("Game start!\n");
    printf("\n>>> Round 1 <<<\n\n");

    // Create struct
    Pokemon a = Create(POKEMON, "Pokemon A");
    Pokemon b = Create(POKEMON, "Pokemon B");

    // Call pokemon functions
    Attack(&a, &b);
    Attack(&b, &a);
    Attack(&a, &b);
    Rest(&b);
}
