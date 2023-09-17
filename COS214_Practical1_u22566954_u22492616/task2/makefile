ofiles = main.o consumerCreator.o consumer.o jsonConsumer.o odataConsumer.o
gpp_o = g++ -c -g -std=c++98 

main: $(ofiles)
	g++ -std=c++98 $(ofiles) -o main

main.o: main.cpp consumer.h jsonConsumer.h odataConsumer.h consumerCreator.h
	$(gpp_o) main.cpp

consumer.o: consumer.cpp consumer.h 
	$(gpp_o) consumer.cpp

jsonConsumer.o: jsonConsumer.cpp jsonConsumer.h consumer.h
	$(gpp_o) jsonConsumer.cpp

odataConsumer.o: odataConsumer.cpp odataConsumer.h consumer.h
	$(gpp_o) odataConsumer.cpp
	
consumerCreator.o: consumerCreator.cpp consumerCreator.h odataConsumer.h jsonConsumer.h
	$(gpp_o) consumerCreator.cpp

run: main
	./main

clean:
	rm *.o main