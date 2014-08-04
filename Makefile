CC := gcc
CFLAGS := -std=c89 -Wall -Wextra -Wpedantic -O

BINARIES := $(patsubst %.c, %, $(wildcard tcpl.*.c))

all: $(BINARIES)

%: %.c
	@echo "Compiling $^..."
	@$(CC) -o $@ $(CFLAGS) $^

clean:
	@echo "Deleting executables..."
	@rm -rf $(BINARIES)

.PHONY: clean
