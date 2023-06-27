# Mod2
# Dynamic Lib .so (shared object)

MODULE_NAME = mod2

TEST_MODULE = test_mod2.cpp
TEST_BIN_DIR = ../../test_build

TARGET_DIR = ../../libs
TARGET_NAME = lib$(MODULE_NAME).so
TARGET = $(TARGET_DIR)/$(TARGET_NAME)

OBJ_DIR = ../../objs
OBJ1 = $(OBJ_DIR)/$(MODULE_NAME).o

CFLAGS = -Wall -Werror # -fPIC if gcc
LDFLAGS =

$(TARGET) : $(OBJ1)
	g++ -shared $< -o $@ $(LDFLAGS)

$(OBJ1) : $(MODULE_NAME).cpp
	g++ $(CFLAGS) -c $< -o $@


clean:
	rm $(TARGET) $(OBJ1)

run_test:
	g++ $(TEST_MODULE) -o $(TEST_BIN_DIR)/$(MODULE_NAME) -L$(TARGET_DIR) -l$(MODULE_NAME)
	./$(TEST_BIN_DIR)/$(MODULE_NAME)
	

build_dir:
	mkdir -p $(TEST_BIN_DIR)
