all: test
test: test.o stack.o
	gcc stack.o test.o -o test
test.o: test.c
	gcc -c test.c
stack.o: stack.c
	gcc -c stack.c
clean:
	rm -rf *.o test
