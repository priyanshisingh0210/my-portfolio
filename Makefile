CC=gcc
CFLAGS=-Wall -Wextra -O2
TARGET=portfolio

all: $(TARGET)

$(TARGET): portfolio.c
	$(CC) $(CFLAGS) portfolio.c -o $(TARGET)

clean:
	rm -f $(TARGET)
