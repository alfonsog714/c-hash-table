GCC=gcc -o main -Wall
LIBS=m
SOURCE=src/main.c src/hash_table.c

all:
	$(GCC) $(SOURCE) -l$(LIBS)

clean:
	rm -rf main
