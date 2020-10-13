draw_shape: canvas.o main.o
	g++ -o draw_shape canvas.o main.o
canvas.o: canvas.cpp
	g++ -c -o canvas.o canvas.cpp
main.o: main.cpp
	g++ -c -o main.o main.cpp
clean:
	rm draw_shape canvas.o main.o
