exec=onya.out
sources=$(wildcard src/*.c)
objects=$(sources:.c=.o)

flags=-g

$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)