CC      := g++
MODULE  := animal
CFLAGS  := -O3 -Wall -std=c++11 -fPIC -I../src/ $(shell python3 -m pybind11 --includes)
LDFLAGS := -shared -L../src
SOURCES := $(wildcard *.cc)
OBJECTS := $(patsubst %.cc,%.o,$(SOURCES))

all: $(MODULE)

$(MODULE): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@$(shell python3-config --extension-suffix) -lanimal

%.o: %.cc Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr $(MODULE)$(shell python3-config --extension-suffix)
	rm -fr $(OBJECTS)

re: clean all
