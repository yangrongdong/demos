.PHONY: all clean

OBJECTS = hello.exe \
	fahrenheit_celsius_float_version.exe \
	fahrenheit_celsius.exe 
BUILD_PATH = build
BIN_PATH = bin
CC = gcc
CCFLAGS = -std=c99
LOCFLAGS =
all: $(OBJECTS) 
%.o: %.c
	$(CC) $(CCFLAGS) $(LOCFLAGS) -c $< -o $(BUILD_PATH)/$@
%.exe: %.o 
	$(CC) $(CCFLAGS) $(LOCFLAGS) $(BUILD_PATH)/$< -o $(BIN_PATH)/$@	

clean: 
	rm -f build/*
	rm -f build/*