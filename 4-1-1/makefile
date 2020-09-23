shapes: shapes.o main.o
	g++ -o shapes main.o shapes.o
shapes.o: shapes.cpp
	g++ -c shapes.cpp
main.o: main.cpp 
	g++ -c main.cpp
clean: 
	rm shapes shapes.o main.o
