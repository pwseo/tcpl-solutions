CC := gcc
CFLAGS := -std=c89 -Wall -Wextra -Wpedantic -O

BINARIES := $(patsubst %.c, %, $(wildcard tcpl.*.c))

all: $(BINARIES)

$(BINARIES):
	@echo "Compiling $@.c..."
	@$(CC) -o $@ $(CFLAGS) $@.c

clean:
	@echo "Deleting executables..."
	@find . -iname "tcpl.*" -type f -executable -exec rm {} \;

.PHONY: clean
