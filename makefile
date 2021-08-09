exec = onya.exe
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
installer = $(wildcard env/installer/*.c)
installerDIR = $(wildcard env/installer/)
flags = -g
CV=0.1.0


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

linux-install:
	gcc $(objects) $(flags) -o /usr/local/bin/Onya

make-installer:
	gcc ${installer} $(flags) -Wall -o $(installerDIR)Onya-Installer-$(CV).exe

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
