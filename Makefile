TARGET := slicing
CC := g++
CFLAG := -std=c++11

HDRS := base.h derived.h
SRCS := base.cpp derived.cpp main.cpp

OBJS := $(SRCS:.cpp=.o)
.SUFFIXES: .cpp .o
$(TARGET): $(OBJS)
	$(CC) -Wall -o $@ $(OBJS)
$(OBJS) : $(HDRS)
.cpp.o:
	$(CC) -Wall $(CFLAG) -c $<
.PHONY: clean run

run:
	make
	./$(TARGET)

clean:
	-rm *.o
	-rm $(TARGET)

