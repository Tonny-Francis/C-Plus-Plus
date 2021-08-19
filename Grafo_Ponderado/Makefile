all:
	g++ -c ./cpp/Grafo.cpp -I ./Headers  -o ./bin/Grafo.o
	g++ ./cpp/main.cpp ./bin/*.o -I ./Headers -o ./exe/main

clean:
	rm ./bin/*.o ./exe/*.exe
run:
	./exe/main