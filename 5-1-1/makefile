sorted_array: sorted.o main.o
	g++ -o sorted_array sorted.o main.o
sorted.o: sorted.cpp
	g++ -c -o sorted.o sorted.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean: 
	rm sorted_array sorted.o main.o
