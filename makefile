exec = onya.exe
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

# install:
#	gcc $(objects) $(flags) -o /usr/local/bin/Onya

linux-build:
	

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
