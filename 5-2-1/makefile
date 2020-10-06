message_book: message.o main.o
	g++ -o message_book message.o main.o
message.o: message.cpp
	g++ -c -o message.o message.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean: 
	rm message_book message.o main.o
