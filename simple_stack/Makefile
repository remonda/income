WORKROOT = ./
SRC_DIR = ./src
INC_DIR = ./include
OBJ_DIR = ./obj
BIN_DIR = ./bin
SOURCE = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(addprefix $(OBJ_DIR)/, $(patsubst %.cpp, %.o, $(notdir $(SOURCE)))) 



TARGET = simple_stack
CXX = /usr/bin/g++
CXX_FLAGS = -std=c++11 -g -Wall -Wextra



.PHONY:all clean

all:	$(TARGET)
	@echo "build success"

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(BIN_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(BIN_DIR):
	mkdir $(BIN_DIR)

$(TARGET):	$(OBJS) | $(BIN_DIR)
	$(CXX) $(CXX_FLAGS) -o $(BIN_DIR)/$@ $(OBJS)
    
$(OBJ_DIR)/%.o:    $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXX_FLAGS) -I$(INC_DIR) -c $< -o $@
