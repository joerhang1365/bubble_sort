CC=gcc
CFLAGS= -std=c11 -Wall -Werror -Wpedantic
LDFLAGS= -lm
PROJECT_NAME=bubble_sort

build: main.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROJECT_NAME) main.c

clean:
	rm -f $(PROJECT_NAME)
