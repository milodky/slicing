TARGET := slicing
CC := g++
CFLAG := -std=c++11

OBJS := base.o derived.o main.o
.SUFFIXES: .cpp .o
$(TARGET): $(OBJS)
	$(CC) -Wall -o $@ $(OBJS)
#.cpp.o:
#equilent to the line below
%.o: %.cpp
	@echo compiling $<
	@echo generating $@
	$(CC) -Wall $(CFLAG) -c $<
.PHONY: clean run

run:
	make
	./$(TARGET)

clean:
	-rm *.o
	-rm $(TARGET)

