Animal: animal.o main.o
	g++ -o Animal animal.o main.o
animal.o: animal.cpp
	g++ -c -o animal.o animal.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean:
	rm Animal animal.o main.o
