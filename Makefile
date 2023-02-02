Stack: main.o Stack.o
	g++ main.o Stack.o -o Stack

main.o: main.cpp
	g++ -c main.cpp

Stack.o: Stack.cpp Stack.h Node.h
	g++ -c Stack.cpp

clean:
	rm *.o Stack