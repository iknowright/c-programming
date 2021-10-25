#include "winner.h"
/**************************************************
winner:getting result and prints it,comparing the 
scores will do the rest.
***************************************************/
void winner(void){
	int p,max=0,winner;
	for(p=0;p<PLAYER;p++)
		if(score[p]>max)max=score[p];
	for(p=0;p<PLAYER;p++)
		if(score[p]==max)winner=p;
	printf("Winner: Player %d--",winner+1);
	switch(score[winner]/1000){
		case 8:printf("Straight flush");break;
		case 7:printf("Four of a kind");break;
		case 6:printf("Full house");break;
		case 5:printf("Flush");break;
		case 4:printf("Straight");break;
		case 3:printf("Three of a kind");break;
		case 2:printf("Two pairs");break;
		case 1:printf("Pair");break;
		case 0:printf("Highcard");break;
	}
	printf("\n");
}
