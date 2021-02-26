#include <cstdio>
#include <cstring>

#include "pokemon.h"


typedef enum { POKEMON, SQUIRTLE, PIKACHU, CHARMANDER } Type;


typedef struct {
    Type t;
    char name[100];
    int hp;
    int atk;
} Pokemon;


Pokemon Create(Type t, const char* name) {
    Pokemon p;
    p.t = t;
    strcpy(p.name, name);
    p.hp = 20;
    p.atk = 1;
    return p;
}


Pokemon Create(Type t, const char* name);



void Rest(Pokemon* p) {
    printf("%s rested for a while.\n", p->name);
    p->hp = p->hp + 1;
    printf("%s HP is restored to %d (+%d).\n", p->name, p->hp, 1);
    printf("\n");
}


 
void TakeDamge(Pokemon* p, int dmg) {
    p->hp = p->hp - dmg;
    printf("%s HP is reduced to %d (-%d).\n", p->name, p->hp, dmg);
}


void Attack(Pokemon* p, Pokemon* other) {
    printf("%s attacked %s!\n", p->name, other->name);
    TakeDamge(other, p->atk);
    printf("\n");
}