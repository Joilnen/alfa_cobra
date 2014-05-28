SRC=main.cc Char.cc Game.cc Cobra.cc
OBJ=main.o Char.o Game.o Cobra.o
CC=c++
BIN=alpha_snake

.cc.o:
	$(CC) -c $< -std=c++11

all: $(OBJ)
	$(CC) -o $(BIN) $(OBJ) -l sfml-graphics

clean:
	rm -f *.o > /dev/null
clobber:
	rm -f *.o $(BIN)  > /dev/null

