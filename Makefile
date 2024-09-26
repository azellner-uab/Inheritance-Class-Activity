# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Target executable
TARGET = animal_program

# Source files
SRC = main.cpp animal.cpp shelter.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Default rule to build the target executable
all: $(TARGET)

# Rule to link object files and create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean up object files and executable
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets (not actual files)
.PHONY: all clean
