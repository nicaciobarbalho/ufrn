#Autor Nicacio Costa
PROG = main
CC = g++
CPPFLAGS = -O0 -g -ansi -Wall -pedantic
OBJS = main.o complexo.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp complexo.h
	$(CC) $(CPPFLAGS) -c main.cpp

matematica.o: matematica.cpp
	$(CC) $(CPPFLAGS) -c matematica.cpp

complexo.o: complexo.cpp complexo.h
	$(CC) $(CPPFLAGS) -c complexo.cpp

clean:
	rm -f $(PROG) $(OBJS)