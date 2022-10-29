CC := g++
CFLAGS := -I include/ -g -Wall
BUILD := build/
SRC := src/
TARGET := main.out

all: main 
intruder: 
	$(CC) $(CFLAGS) -c $(SRC)intruder.cpp -o $(BUILD)intruder.o

main: intruder
	$(CC) $(CFLAGS) $(BUILD)intruder.o $(SRC)main.cpp -o $(TARGET)
clean: 
	$(RM) -r $(BUILD)* $(TARGET)