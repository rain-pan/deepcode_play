CC=gcc

all: echod echoc

echod:echo_double.c
	$(CC) $? -o $@ 

echoc:echo.c	
	$(CC) $? -o $@ 

