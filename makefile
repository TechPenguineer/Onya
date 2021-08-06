exec=onya.exe
sources=$(wildcard src/*.c)
objects=$(sources:.c=.o)

flags=-g 


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

install:
	make
	cp ./$(exec) $(wildcard appdata)
clean:
	-rm *.exe
	-rm *.o
	-rm src/*.o