CC=g++
CFLAGS=-Wall -Wextra -pedantic
LDFLAGS=
EXEC=class_creator

all: obj/class_creator.o
	$(CC) $(CFLAGS) $^ -o bin/$(EXEC) $(LDFLAGS)

obj/class_creator.o: src/class_creator.cpp
	$(CC) $(CFLAGS) -c $< -o obj/class_creator.o


install: all
	cp bin/$(EXEC) /usr/local/bin/


.PHONY: clean

clean:
	rm -rf bin/*
