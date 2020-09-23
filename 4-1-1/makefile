simple_shape: shapes.o main.o
	g++ -o simple_shape main.o shapes.o
shapes.o: shapes.cpp
	g++ -c shapes.cpp
main.o: main.cpp 
	g++ -c main.cpp
clean: 
	rm simple_shape shapes.o main.o
