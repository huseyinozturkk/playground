# Mod4
# Uses Static Lib .a (archive)

MODULE_NAME = mod4

TARGET_DIR = ../../libs
TARGET_NAME = lib$(MODULE_NAME).a
TARGET = $(TARGET_DIR)/$(TARGET_NAME)

TEST_MODULE = test_mod4.cpp
TEST_BIN_DIR = ../../test_build

OBJ_DIR = ../../objs
OBJ1 = $(OBJ_DIR)/$(MODULE_NAME).o

WARN_FLAGS = -Wall -Werror
CFLAGS = $(WARN_FLAGS)

LDFLAGS = 

$(TARGET) : $(OBJ1)
	ar rcs $@ $^

$(OBJ1) : $(MODULE_NAME).cpp
	g++ $(CFLAGS) -c $< -o $@


test:
	g++ $(TEST_MODULE) -o $(TEST_BIN_DIR)/$(MODULE_NAME) -L$(TARGET_DIR) -l$(MODULE_NAME)
	./$(TEST_BIN_DIR)/$(MODULE_NAME)

build_dir:
	mkdir -p $(TEST_BIN_DIR)

clean:
	rm $(TARGET) $(OBJ1)
