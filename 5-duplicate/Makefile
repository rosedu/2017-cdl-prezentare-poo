build: main

main: main.o stack.o queue.o
	g++ main.o stack.o queue.o -o main

main.o: main.cpp
	g++ -c main.cpp

stack.o: stack.cpp
	g++ -c stack.cpp

queue.o: queue.cpp
	g++ -c queue.cpp

run: build
	./main

clean:
	rm -rf *.o main

