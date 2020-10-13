Animal: animals.o main.o
	g++ -o Animal animals.o main.o
animals.o: animals.cpp
	g++ -c -o animals.o animals.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean:
	rm Animal animals.o main.o
