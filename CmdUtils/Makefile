CC=gcc
CFLAGS=-I../include
TARGET=cil

SRC_DIR=src
INCLUDE_DIR=include

SRCS=$(wildcard $(SRC_DIR)/*.c)
OBJS=$(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE_DIR)/cmd_utils.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)