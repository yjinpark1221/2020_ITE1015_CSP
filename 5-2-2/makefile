simple_int_set: setfunc.o main.o
	g++ -o simple_int_set setfunc.o main.o
setfunc.o: setfunc.cpp
	g++ -c -o setfunc.o setfunc.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean:
	rm simple_int_set setfunc.o main.o
