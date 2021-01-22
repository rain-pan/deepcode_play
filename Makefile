CC=gcc

targets:=echod echoc loop_on_float null_pointer goto unreachable strcpy
all: $(targets)

echod:echo_double.c
	$(CC) $? -o $@ 

echoc:echo.c	
	$(CC) $? -o $@ 

loop_on_float:loop_on_float.c
	$(CC) $? -o $@ 

null_pointer:null_pointer.c
	$(CC) $? -o $@ 

goto:goto.c
	$(CC) $? -o $@ 

unreachable:unreachable.c
	$(CC) $? -o $@ 

strcpy:strcpy.c
	$(CC) $? -o $@ 

clean:
	rm -f $(targets)
