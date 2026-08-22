.PHONY: all clean run interactive clean-interactive setup

CXX = g++
CXXOPTS = -std=c++17 -Wall -I.
TARGET = checks

SRC_DIR = src
OBJ_DIR = obj

SRCS = $(wildcard $(SRC_DIR)/*.cpp) main.cpp
OBJS = $(OBJ_DIR)/main.o $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(wildcard $(SRC_DIR)/*.cpp))
INTERACTIVE_FILES = $(shell grep -l "^#ifdef INTERACTIVE" $(SRC_DIR)/*.cpp 2>/dev/null | sed 's|$(SRC_DIR)/||')

all: setup $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXOPTS) -c $< -o $@

$(OBJ_DIR)/main.o: main.cpp | $(OBJ_DIR)
	$(CXX) $(CXXOPTS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(CXXOPTS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)

setup:
	mkdir -p $(SRC_DIR) $(OBJ_DIR)

run: $(TARGET)
	./$(TARGET)

interactive-%: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXOPTS) -DINTERACTIVE -o $@ $<

clean-interactive:
	rm -f interactive-*

interactive-all: $(patsubst %.cpp, interactive-%, $(INTERACTIVE_FILES))
