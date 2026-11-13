CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror -g

INCLUDES = -Iinclude
BUILD_DIR = build
TARGET = $(BUILD_DIR)/test_utilities

OBJECTS = $(BUILD_DIR)/utilities.o $(BUILD_DIR)/test_utilities.o

.PHONY: all

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

# Compile utility implementation
$(BUILD_DIR)/utilities.o: src/utilities.c include/utilities.h
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c src/utilities.c -o $@

# Compile test implementation
$(BUILD_DIR)/test_utilities.o: tests/test_utilities.c include/utilities.h
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c tests/test_utilities.c -o $@

# Run unit tests
.PHONY: test

test: $(TARGET)
	./$(TARGET)

# Remove generated files
.PHONY: clean

clean:
	rm -rf $(BUILD_DIR)
