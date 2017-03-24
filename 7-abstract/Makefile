build: main

main: main.o stack.o queue.o container.o
	g++ container.o main.o stack.o queue.o -o main

main.o: main.cpp
	g++ -c main.cpp

stack.o: stack.cpp
	g++ -c stack.cpp

queue.o: queue.cpp
	g++ -c queue.cpp

container.o: container.cpp
	g++ -c container.cpp

run: build
	./main

clean:
	rm -rf *.o main

