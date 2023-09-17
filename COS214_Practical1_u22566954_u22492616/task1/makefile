ofiles = main.o ship.o Momento.o militaryMomento.o militaryShip.o cargoShip.o cargoMomento.o
gpp_o = g++ -c -g -std=c++98 

main: $(ofiles)
	g++ -std=c++98 $(ofiles) -o main

main.o: main.cpp ship.h cargoShip.h Momento.h cargoMomento.h militaryShip.h militaryMomento.h
	$(gpp_o) main.cpp

ship.o: ship.cpp ship.h 
	$(gpp_o) ship.cpp

Momento.o: Momento.cpp Momento.h
	$(gpp_o) Momento.cpp

militaryMomento.o: militaryMomento.cpp militaryMomento.h Momento.h
	$(gpp_o) militaryMomento.cpp

militaryShip.o: militaryShip.cpp militaryShip.h ship.h militaryMomento.h
	$(gpp_o) militaryShip.cpp
	
cargoShip.o: cargoShip.cpp cargoShip.h ship.h cargoMomento.h
	$(gpp_o) cargoShip.cpp

cargoMomento.o: cargoMomento.cpp cargoMomento.h
	$(gpp_o) cargoMomento.cpp

run: main
	./main

clean:
	rm *.o main