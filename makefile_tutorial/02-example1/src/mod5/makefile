# Mod5
# Uses F4 from static lib mod4
# uses F2 from shared object mod2

MODULE_NAME = mod5

TARGET_DIR = ../../bins
TARGET_NAME = mod5_bin
TARGET = $(TARGET_DIR)/$(TARGET_NAME)

OBJ_DIR = ../../objs
OBJ1 = $(OBJ_DIR)/$(MODULE_NAME).o

INC_PATH = ../../share_headers
WARN_FLAGS = -Wall -Werror
CFLAGS = $(WARN_FLAGS) -I$(INC_PATH)

LIBS_PATH = ../../libs
LDFLAGS = -L$(LIBS_PATH)	-lmod2 -lmod4

$(TARGET) : $(OBJ1)
	g++ $< -o $@ $(LDFLAGS)

$(OBJ1) : $(MODULE_NAME).cpp
	g++ $(CFLAGS) -c $< -o $@

install:
	cp ../mod2/*.h ../../share_headers/
	cp ../mod4/*.h ../../share_headers/

clean:
	rm $(TARGET) $(OBJ1)

run:
	./$(TARGET)