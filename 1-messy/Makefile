build: stack

stack: stack.o
	gcc stack.o -o stack

stack.o: stack.c
	gcc -c stack.c

run: build
	./stack

clean:
	rm -rf stack.o stack

