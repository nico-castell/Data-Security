all: binme passcrypt passgen passobfuscate

binme: Binary/Program.cpp
	g++ -o binme Binary/Program.cpp

passcrypt: Encrypter/Program.cpp
	g++ -o passcrypt Encrypter/Program.cpp

passgen: Generator/Program.cpp
	g++ -o passgen Generator/Program.cpp

passobfuscate: Obfuscator/Program.o Obfuscator/key.o Obfuscator/modifiers.o
	g++ -o passobfuscate Obfuscator/Program.o Obfuscator/key.o Obfuscator/modifiers.o

Obfuscator/Program.o: Obfuscator/Program.cpp
	g++ -c -o Obfuscator/Program.o Obfuscator/Program.cpp

Obfuscator/key.o: Obfuscator/key.cpp
	g++ -c -o Obfuscator/key.o Obfuscator/key.cpp

Obfuscator/modifiers.o: Obfuscator/modifiers.cpp
	g++ -c -o Obfuscator/modifiers.o Obfuscator/modifiers.cpp

clean:
	rm -fv Obfuscator/*.o binme passcrypt passgen passobfuscate 2>/dev/null
