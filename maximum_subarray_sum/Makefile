all: program.elf
	./program.elf

program.elf: main.cpp
	g++ -std=c++11 -O2 -Wall $< -o $@
