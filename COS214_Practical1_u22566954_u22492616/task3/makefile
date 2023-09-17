ofiles = main.o factory.o primitive.o window.o openGLFactory.o vulkanFactory.o openGLPrimitive.o vulkanPrimitive.o openGLWindow.o vulkanWindow.o
gpp_o = g++ -c -g -std=c++98 

main: $(ofiles)
	g++ -std=c++98 $(ofiles) -o main

main.o: main.cpp factory.h primitive.h window.h openGLFactory.h vulkanFactory.h openGLPrimitive.h vulkanPrimitive.h openGLWindow.h vulkanWindow.h
	$(gpp_o) main.cpp

factory.o: factory.cpp factory.h openGLWindow.h vulkanWindow.h
	$(gpp_o) factory.cpp

primitive.o: primitive.cpp primitive.h
	$(gpp_o) primitive.cpp

window.o: window.cpp window.h
	$(gpp_o) window.cpp

openGLPrimitive.o: openGLPrimitive.cpp openGLPrimitive.h primitive.h
	$(gpp_o) openGLPrimitive.cpp

vulkanPrimitive.o: vulkanPrimitive.cpp vulkanPrimitive.h primitive.h
	$(gpp_o) vulkanPrimitive.cpp

openGLWindow.o: openGLWindow.cpp openGLWindow.h window.h openGLPrimitive.h
	$(gpp_o) openGLWindow.cpp

vulkanWindow.o: vulkanWindow.cpp vulkanWindow.h window.h vulkanPrimitive.h
	$(gpp_o) vulkanWindow.cpp
	
vulkanFactory.o:vulkanFactory.cpp vulkanFactory.h factory.h
	$(gpp_o) vulkanFactory.cpp

openGLFactory.o: openGLFactory.cpp openGLFactory.h factory.h
	$(gpp_o) openGLFactory.cpp

run: main
	./main

clean:
	rm *.o main