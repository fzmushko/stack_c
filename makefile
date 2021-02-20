all: test
test: test.o stack.o
	gcc stack.o test.o -o test -g
test.o: test.c
	gcc -c test.c -g
stack.o: stack.c
	gcc -c stack.c -g
clean:
	rm -rf *.o test
