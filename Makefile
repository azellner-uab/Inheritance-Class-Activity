client: main.o shelter.o animal.o
	g++ main.o shelter.o animal.o -o client
	
main.o: main.cpp shelter.h animal.h cat.h dog.h
	g++ -c main.cpp
	
shelter.o: shelter.cpp shelter.h animal.h cat.h dog.h
	g++ -c shelter.cpp
	
animal.o: animal.cpp cat.cpp dog.cpp animal.h cat.h dog.h
	g++ -c animal.cpp
	g++ -c dog.cpp
	g++ -c cat.cpp
	
run: client
	./client
	
clean:
	rm -f *.o client