build: stack

stack: stack.o main.o
	g++ stack.o main.o -o stack

main.o: main.cpp
	g++ -c main.cpp

stack.o: stack.cpp
	g++ -c stack.cpp

run: build
	./stack

clean:
	rm -rf *.o stack

