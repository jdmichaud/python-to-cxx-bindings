CC      := g++
AR      := ar
LIB     := libanimal.a
CFLAGS  := -fPIC
LDFLAGS := -L./

all: $(LIB)

$(LIB): dog.o cat.o
	$(AR) rcs $@ cat.o dog.o

%.o: %.cc Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr *.o
	rm -fr *.a

re: clean all
