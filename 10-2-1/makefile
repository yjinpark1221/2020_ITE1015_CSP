calendar: calendar.o calendar_main.o
	g++ -o calendar calendar.o calendar_main.o

calendar.o: calendar.cc
	g++ -c calendar.cc

calendar_main.o: calendar_main.cc
	g++ -c calendar_main.cc

clean: 
	rm calendar calendar.o calendar_main.o

