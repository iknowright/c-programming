#include <stdio.h>
#include <stdlib.h>
void print_bit(void);
union{
	struct{
		//cute 32 parts
		unsigned int b1:1;unsigned int b2:1;
		unsigned int b3:1;unsigned int b4:1;
		unsigned int b5:1;unsigned int b6:1;
		unsigned int b7:1;unsigned int b8:1;
		unsigned int b9:1;unsigned int b10:1;
		unsigned int b11:1;unsigned int b12:1;
		unsigned int b13:1;unsigned int b14:1;
		unsigned int b15:1;unsigned int b16:1;
		unsigned int b17:1;unsigned int b18:1;
		unsigned int b19:1;unsigned int b20:1;
		unsigned int b21:1;unsigned int b22:1;
		unsigned int b23:1;unsigned int b24:1;
		unsigned int b25:1;unsigned int b26:1;
		unsigned int b27:1;unsigned int b28:1;
		unsigned int b29:1;unsigned int b30:1;
		unsigned int b31:1;unsigned int b32:1;
	}s;
	union{
		//two types
		int int_x;
		float float_x;
	}u;
}type_u;
int main(int argc,char *argv[]){
	int *A;
    int N;
	int i;
    N=atoi(argv[1]);
    switch(N){
    case 1:
        type_u.u.int_x=atoi(argv[2]);
		print_bit();
		break;
	case 2:
		type_u.u.float_x=atof(argv[2]);
		print_bit();
		break;
	case 3:
		//assign each "bit" in each part of memory location
		type_u.s.b1=argv[2][31]-'0';
		type_u.s.b2=argv[2][30]-'0';
		type_u.s.b3=argv[2][29]-'0';
		type_u.s.b4=argv[2][28]-'0';
		type_u.s.b5=argv[2][27]-'0';
		type_u.s.b6=argv[2][26]-'0';
		type_u.s.b7=argv[2][25]-'0';
		type_u.s.b8=argv[2][24]-'0';
		type_u.s.b9=argv[2][23]-'0';
		type_u.s.b10=argv[2][22]-'0';
		type_u.s.b11=argv[2][21]-'0';
		type_u.s.b12=argv[2][20]-'0';
		type_u.s.b13=argv[2][19]-'0';
		type_u.s.b14=argv[2][18]-'0';
		type_u.s.b15=argv[2][17]-'0';
		type_u.s.b16=argv[2][16]-'0';
		type_u.s.b17=argv[2][15]-'0';
		type_u.s.b18=argv[2][14]-'0';
		type_u.s.b19=argv[2][13]-'0';
		type_u.s.b20=argv[2][12]-'0';
		type_u.s.b21=argv[2][11]-'0';
		type_u.s.b22=argv[2][10]-'0';
		type_u.s.b23=argv[2][9]-'0';
		type_u.s.b24=argv[2][8]-'0';
		type_u.s.b25=argv[2][7]-'0';
		type_u.s.b26=argv[2][6]-'0';
		type_u.s.b27=argv[2][5]-'0';
		type_u.s.b28=argv[2][4]-'0';
		type_u.s.b29=argv[2][3]-'0';
		type_u.s.b30=argv[2][2]-'0';
		type_u.s.b31=argv[2][1]-'0';
		type_u.s.b32=argv[2][0]-'0';
		printf("%.23e\n",type_u.u.float_x);
		break;
	}

	return 0;
}
//function to print each bit-field's "bit"
void print_bit(void){
	printf("%d",type_u.s.b32);printf("%d",type_u.s.b31);
	printf("%d",type_u.s.b30);printf("%d",type_u.s.b29);
	printf("%d",type_u.s.b28);printf("%d",type_u.s.b27);
	printf("%d",type_u.s.b26);printf("%d",type_u.s.b25);
	printf("%d",type_u.s.b24);printf("%d",type_u.s.b23);
	printf("%d",type_u.s.b22);printf("%d",type_u.s.b21);
	printf("%d",type_u.s.b20);printf("%d",type_u.s.b19);
	printf("%d",type_u.s.b18);printf("%d",type_u.s.b17);
	printf("%d",type_u.s.b16);printf("%d",type_u.s.b15);
	printf("%d",type_u.s.b14);printf("%d",type_u.s.b13);
	printf("%d",type_u.s.b12);printf("%d",type_u.s.b11);
	printf("%d",type_u.s.b10);printf("%d",type_u.s.b9);
	printf("%d",type_u.s.b8);printf("%d",type_u.s.b7);
	printf("%d",type_u.s.b6);printf("%d",type_u.s.b5);
	printf("%d",type_u.s.b4);printf("%d",type_u.s.b3);
	printf("%d",type_u.s.b2);printf("%d\n",type_u.s.b1);

}
