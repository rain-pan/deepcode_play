CC=gcc

all: echod echoc loop_on_float

echod:echo_double.c
	$(CC) $? -o $@ 

echoc:echo.c	
	$(CC) $? -o $@ 

loop_on_float:loop_on_float.c
	$(CC) $? -o $@ 
