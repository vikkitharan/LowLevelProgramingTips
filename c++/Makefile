.PHONY: all
all: ./bin/lrValues ./bin/Integer

./bin/lrValues: ./source/lrValues.cpp
	g++ -g3 -o  ./bin/lrValues ./source/lrValues.cpp

./bin/Integer: ./source/Integer/main.cpp ./source/Integer/Integer.cpp ./source/Integer/Integer.h
	g++ -g3 -O0 -o  $@ $^

.PHONY: clean
clean:
	rm -rf ./bin/lrValues ./bin/Integer
