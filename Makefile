CFLAGS = -g -Wall
LDFLAGS = -lvirt

ex: ex1.c
	gcc $(CFLAGS) $^ -o $@ $(LDFLAGS)
ex2: ex2.c
	gcc $(CFLAGS) $^ -o $@ $(LDFLAGS)

