.PHONY: all clean test interactive clean-interactive setup

CXX = g++
CXXOPTS = -std=c++17 -Wall -I.
TARGET = test_runner

SRC_DIR = src
OBJ_DIR = obj

SRCS = $(wildcard $(SRC_DIR)/*.cpp) test.cpp
OBJS = $(OBJ_DIR)/test.o $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(wildcard $(SRC_DIR)/*.cpp))
INTERACTIVE_FILES = $(shell grep -l "^#ifdef INTERACTIVE" $(SRC_DIR)/*.cpp 2>/dev/null | sed 's|$(SRC_DIR)/||')

all: setup $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXOPTS) -c $< -o $@

$(OBJ_DIR)/test.o: test.cpp | $(OBJ_DIR)
	$(CXX) $(CXXOPTS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(CXXOPTS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)

setup:
	mkdir -p $(SRC_DIR) $(OBJ_DIR)

test: $(TARGET)
	./$(TARGET)

interactive-%: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXOPTS) -DINTERACTIVE -o $@ $<

interactive-01-07: $(SRC_DIR)/01-07.cpp $(OBJ_DIR)/01-04.o
	$(CXX) $(CXXOPTS) -DINTERACTIVE $(SRC_DIR)/01-07.cpp $(OBJ_DIR)/01-04.o -o $@

clean-interactive:
	rm -f interactive-*

interactive-all: $(patsubst %.cpp, interactive-%, $(INTERACTIVE_FILES))
