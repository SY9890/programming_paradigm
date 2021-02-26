#pragma once 

/**
 * Type of pokemons
 */

typedef enum { POKEMON, SQUIRTLE, PIKACHU, CHARMANDER } Type;

 /**
 * Pokemon type.
 */
typedef struct {
    Type t;
    char name[100];
    int hp;
    int atk;
} Pokemon;

/**
 * Creates a pokemon
 */
Pokemon Create(Type t, const char* name);

/**
 * Rests and recovers 1 hp.
 */
void Rest(Pokemon* p) ;

/**
 * Takes damage and reduces hp.
 */
void TakeDamge(Pokemon* p, int dmg);

/**
 * Attacks other pokemon
 */
void Attack(Pokemon* p, Pokemon* other) ;