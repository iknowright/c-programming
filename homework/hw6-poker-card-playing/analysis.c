#include "analysis.h"
/**************************************************
dealcard:distribute different cards for each player 
***************************************************/
void dealcard(int p){
	printf("PLAYER %d: ",p+1);
	int suit ,rank;
	int i=NUM_CARDS;
	for(rank=0;rank<NUM_RANKS;rank++)
		num_in_rank[rank]=0;
	for(suit=0;suit<NUM_SUITS;suit++)
		num_in_suit[suit]=0;
	while(i>0){
		suit=rand()%NUM_SUITS;
		rank=rand()%NUM_RANKS;
		if(in_hand[rank][suit])
			continue;
		pokercard[i][RANK]=rank;
		pokercard[i][SUIT]=suit;
		num_in_rank[rank]++;
		num_in_suit[suit]++;
		switch(rank){
			case 0:case 1:case 2:case 3:
			case 4:case 5:case 6:case 7:
			printf("%d",rank+2);break;
			case 8:printf("T");break;
			case 9:printf("J");break;
			case 10:printf("Q");break;
			case 11:printf("K");break;
			case 12:printf("A");break;
		}
		switch(suit){
			case 0:printf("C");break;
			case 1:printf("D");break;
			case 2:printf("H");break;
			case 3:printf("S");break;
		}	
		in_hand[rank][suit]=true;
		printf(" ");
		i--;
	}
}
/**************************************************
analysis:To obtain the pattern occcurences meanwhile
stores the rank and suit points in responding pattern 
***************************************************/
void analysis(int p){
	int num_consec=0;
	int rank,suit;
	straight=false;
	flush=false;
	four=false;
	three=false;
	pairs=0;
	/*flush*/
	for (suit = 0; suit < NUM_SUITS; suit++)
	{
		if(num_in_suit[suit]==NUM_CARDS)
			flush = true;
			highcard();
	}
	/*straight*/
	rank=0;
	while(num_in_rank[rank]==0)rank++;
	for (; rank<NUM_RANKS&&num_in_rank[rank] > 0; rank++)
		num_consec++;
	if(num_consec==NUM_CARDS){
		straight=true;
		rank_point=rank-1;suit_point=suitmax();
		return;
	}
	/*check 4,3,and pairs*/
	for (rank = 0; rank < NUM_RANKS; rank++)
	{
		if(num_in_rank[rank]==4){four=true;rank_point=rank;suit_point=suitmax();}
		if(num_in_rank[rank]==3){three=true;rank_point=rank;suit_point=suitmax();}
	}
	for (rank = 0; rank < NUM_RANKS; rank++)
	{
		if(num_in_rank[rank]==2){
			pairs++;
			if(three)
				return;
			rank_point=rank;
			suit_point=suitmax();
		}
	}
	highcard();
}
/**************************************************
cardlevel:this function is to obtain the pattern
point
***************************************************/
void cardlevel(void){
	if(straight&&flush){pattern_point=8;}
	else if(four){pattern_point=7;}
	else if(three&&pairs==1){pattern_point=6;}
	else if(flush){pattern_point=5;}
	else if(straight){pattern_point=4;}
	else if(three){pattern_point=3;}
	else if(pairs==2){pattern_point=2;}
	else if(pairs==1){pattern_point=1;}
	else {pattern_point=0;}
}
/**************************************************
suitmax:with same pattern and rank,the next we have to
compare the suit ,suitmax resolves it,and called by
analysis function when it meets the requairement.
***************************************************/
int suitmax(void)
{
	int i,max=0;
	for(i=0;i<NUM_CARDS;i++){
		if(pokercard[i][RANK]==rank_point){
			if(pokercard[i][SUIT]>max)max=pokercard[i][SUIT];
		}
	}	
	return max;
}
/**************************************************
highcard:only occurs in flush or no-pattern,it is 
called in analysis
***************************************************/
void highcard(void){
	int i,max=0;
	for(i=0;i<NUM_CARDS;i++){
			if(pokercard[i][RANK]>max)max=pokercard[i][RANK];
	}
	rank_point=max;
	suit_point=suitmax();
}
/**************************************************
player point:evaluate the score for each player
pattern stands for 1000pts,rank for 10points,suit 
for 1~4.
***************************************************/
void player_point(int p){
	score[p]=1000*pattern_point+10*rank_point+suit_point;
}