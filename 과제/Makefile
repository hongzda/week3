cc = g++
target = a.out
objects = main.o Str.o

$(target): $(objects)
	$(cc) -g $(objects)

.PHONY : clean
clean :
	rm $(target) $(objects)
