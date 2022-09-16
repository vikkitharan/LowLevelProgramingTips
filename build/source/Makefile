.PHONY: all
all: helloWorld

helloWorld.o: helloWorld.cpp
	g++  -o sampleLibrary.so sampleLibrary.cpp


sampleApp: sampleApp.cpp sampleLibrary.so
	g++ -g3 -o  sampleApp sampleApp.cpp sampleLibrary.so


.PHONY: clean
clean:
	rm -rf sampleApp sampleLibrary.so
