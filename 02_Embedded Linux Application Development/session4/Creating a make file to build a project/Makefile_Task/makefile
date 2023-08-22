# This is a makefile to build a C++ program

# The compiler to use
CXX = g++

# The flags to pass to the compiler
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

# The name of the executable
TARGET = main

# The source files
SRC = main.cpp

# The object files
OBJ = $(SRC:.cpp=.o)

# The default target
all: $(TARGET)

# Build the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Clean up the build 
clean:
	rm -r build/
	rm -f $(OBJ) $(TARGET)


# Install the executable
install: $(TARGET)
	mkdir -p build/usr/bin
	mv $(TARGET) build/usr/bin/

.PHONY: all clean install
