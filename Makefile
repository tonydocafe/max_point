
CC = gcc


CFLAGS = -Wall -g


EXEC = tp2

OBJS = menu.o estrategias.o tp2.o


all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)


menu.o: menu.c tp2.h
	$(CC) $(CFLAGS) -c menu.c

estrategias.o: estrategias.c tp2.h
	$(CC) $(CFLAGS) -c estrategias.c

tp2.o: tp2.c tp2.h
	$(CC) $(CFLAGS) -c tp2.c


clean:
	rm -f $(OBJS) $(EXEC) saida.txt
