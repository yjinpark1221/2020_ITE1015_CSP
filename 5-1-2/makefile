integer_set: intset.o main.o
	g++ -o integer_set intset.o main.o
intset.o: intset.cpp
	g++ -c -o intset.o intset.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean:
	rm integer_set intset.o main.o
