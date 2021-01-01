passcrypt: Program.cpp
	g++ Program.cpp -o passcrypt

clean:
	rm -f -v passcrypt *.o 2> /dev/null
