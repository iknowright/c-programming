#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
#define NUM_CARDS 5
#define PLAYER 4
#define RANK 0
#define SUIT 1

bool straight ,flush,three,four;
bool in_hand[NUM_RANKS][NUM_SUITS];
int pairs;
int pattern_point,rank_point,suit_point;
int pokercard[NUM_CARDS][2];
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
int score[PLAYER];

int main();