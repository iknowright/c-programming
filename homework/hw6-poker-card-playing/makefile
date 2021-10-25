hw6:main.o analysis.o winner.o
	gcc -o hw6 main.c analysis.c winner.c

main.o:main.c main.h
	gcc -c main.c

analysis.o:analysis.c main.h analysis.h
	gcc -c analysis.c

winner.o:winner.c main.h winner.h
	gcc -c winner.c