# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

# Executable name
TARGET = test_lender

# Source files
SRCS = main.cpp Lender.cpp Borrower.cpp Company.cpp Agent.cpp Date.cpp Facility.cpp Deal.cpp Part.cpp Portfolio.cpp

# Header files
HEADERS = Lender.h Borrower.h Company.h Agent.h Date.h Facility.h Deal.h Part.h Portfolio.h

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to build object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $<

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
