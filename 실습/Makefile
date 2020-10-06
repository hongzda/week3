cc = g++
target = a.out
objects = main.o Array.o RangeArray.o 

$(target): $(objects)
	$(cc) -g $(objects)

.PHONY : clean
clean :
	rm $(target) $(objects)
