#include<stdio.h>

main(){
	int a1,a2,a3,a4,
	b1,b2,b3,b4,
	c1,c2,c3,c4,
	d1,d2,d3,d4;

	printf("Enter the numbers from 1 to 16 in any order:");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
	&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4,&c1,&c2,&c3,&c4,&d1,&d2,&d3,&d4);

	printf("%2d%3d%3d%3d\n%2d%3d%3d%3d\n%2d%3d%3d%3d\n%2d%3d%3d%3d\n",
	a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4);
	printf("Row sums:%3d%3d%3d%3d\n",(a1+a2+a3+a4),(b1+b2+b3+b4),
	(c1+c2+c3+c4),(d1+d2+d3+d4));
	printf("Column sums:%3d%3d%3d%3d\n",(a1+b1+c1+d1),(a2+b2+c2+d2),
	(a3+b3+c3+d3),(a4+b4+c4+d4));
	printf("Diagonal sums:%3d%3d\n",(a1+b2+c3+d4),(a4+b3+c2+d1));

	return 0;
	}
