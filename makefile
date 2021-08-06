exec = onya.exe
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

install-unix:
	make
	cp ./onya.out /usr/local/bin/hello

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
	-rm *.exe