#include "main.h"
#include "analysis.h"
#include "winner.h"

int main(){
	srand((unsigned)time(NULL));
	int p;
	for(p=0;p<PLAYER;p++){
		dealcard(p);
		analysis();
		cardlevel();
		player_point(p);
		printf("\n");
	}
	winner();
	return 0;
}