
CC=gcc
CF=-I.
FLAGS = -Wall -g
FIRSTMAIN = Main.o
SECOUNDMAIN = SecMain.o
all: isort txtfind

isort:  $(FIRSTMAIN) isort.a
	$(CC) $(FLAGS) -o isort $(FIRSTMAIN) isort.a

txtfind: $(SECOUNDMAIN) txtfind.a
	$(CC) $(FLAGS) -o txtfind $(SECOUNDMAIN) txtfind.a

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -fPIC -c isort.c

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -fPIC -c txtfind.c

isort.a: isort.o   
	ar rcs $@ $^


txtfind.a: txtfind.o   
	ar rcs $@ $^


.PHONY: clean all 

clean:
	rm -f *.o *.a isort txtfind