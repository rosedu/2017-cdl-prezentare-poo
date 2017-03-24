build: stack

stack: stack.o main.o
	gcc stack.o main.o -o stack

main.o: main.c
	gcc -c main.c

stack.o: stack.c
	gcc -c stack.c

run: build
	./stack

clean:
	rm -rf *.o stack

