shapes: shape.o main.o
	g++ -o shapes shape.o main.o
shape.o: shape.cpp
	g++ -c -o shape.o shape.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean:
	rm shapes shape.o main.o
