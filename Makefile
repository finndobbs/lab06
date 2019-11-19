QueueDemo: main.o Queue.o
	g++ -g -Wall -std=c++11 main.o Queue.o -o QueueDemo

main.o: main.cpp 
	g++ -g -std=c++11 -c main.cpp

Test.o: Test.h Test.cpp
	g++ -g -std=c++11 -c Test.cpp

clean:
	rm main.o QueueDemo *~
