all: main.o functions.o
	gcc -o program main.o functions.o

main.o: main.c headers.h
	gcc -c main.c

functions.o: functions.c headers.h
	gcc -c functions.c

run:
	./program

check: main.c functions.c headers.h
	gcc -g main.c functions.c

gdb:
	gdb program.exe

clean:
	rm *.o
	rm *.exe
