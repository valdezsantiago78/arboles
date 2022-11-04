todo: main.o arbol.o helper.o
	g++ -Wall -o arboles-exe main.o arbol.o helper.o
main.o: main.cpp
	g++ -Wall -c main.cpp
arbol.o:
	g++ -Wall -c arbol.cpp arbol.h
helper.o:
	g++ -Wall -c helper.cpp helper.h
clean: 
	rm -f *.o