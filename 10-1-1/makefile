my_clock: my_clock.o my_clock_main.o
	g++ -o my_clock my_clock.o my_clock_main.o

my_clock.o: my_clock.cc
	g++ -c my_clock.cc

my_clock_main.o: my_clock_main.cc
	g++ -c my_clock_main.cc

clean: 
	rm my_clock my_clock.o my_clock_main.o
