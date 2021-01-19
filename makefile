passobfuscate: Program.o modifiers.o key.o
	g++ Program.o modifiers.o key.o -o passobfuscate

Program.o: Program.cpp
	g++ -c Program.cpp

modifiers.o: modifiers.cpp
	g++ -c modifiers.cpp

key.o: key.cpp
	g++ -c key.cpp

clean:
	rm -f -v passobfuscate *.o 2> /dev/null
