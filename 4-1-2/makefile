simple_account: accounts.o main.o
	g++ -o simple_account accounts.o main.o
accounts.o: accounts.cpp
	g++ -c accounts.cpp
main.o: main.cpp
	g++ -c main.cpp
clean: 
	rm simple_account accounts.o main.o
