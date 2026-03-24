# Legacy
# Compiler settings
CXX = g++
CXXFLAGS = -std=c++11 -O2 -Wall

# Source and object files
SRC = 158A.cpp
OBJ = 158A.o

# Detect OS
ifeq ($(OS),Windows_NT)
    # Windows executable
    EXE = .exe
else
    # Linux/Mac executable
    EXE =
endif

# Default target to compile the program
all: output$(EXE)

# Compile the source file into an object file
$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

# Link the object file to create the executable
output$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o output$(EXE)

# Phony target to prevent conflicts with a file named "all"
.PHONY: all