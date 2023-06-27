# Mod1
# Creates binary file of an basic program

MODULE_NAME = mod1

TARGET_DIR = ../../bins
TARGET_NAME = mod1_bin
TARGET = $(TARGET_DIR)/$(TARGET_NAME)

OBJ_DIR = ../../objs
OBJ1 = $(OBJ_DIR)/$(MODULE_NAME).o

CFLAGS = -Wall 
LDFLAGS = -lm

# OUTPUT  : INPUT
$(TARGET) : $(OBJ1)
	gcc $< -o $@ $(LDFLAGS)

$(OBJ1) : $(MODULE_NAME).c
	gcc $(CFLAGS) -c $< -o $@ 


clean:
	rm $(TARGET) $(OBJ1)

run:
	./$(TARGET)
