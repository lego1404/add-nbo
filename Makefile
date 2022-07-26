#Makefile

all: add-nbo

add-nbo: 
	gcc -o add-nbo add-nbo.c

clean:
	rm -f add-nbo
	rm -f *.bin
