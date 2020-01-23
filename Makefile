EXEC_NAME=openFPGALoader
SRC= $(wildcard *.cpp) 
OBJS= $(SRC:.cpp=.o)
LDFLAGS=-lm -g -Wall -std=c++11 $(shell pkg-config --libs libftdipp1 libudev)
CXXFLAGS=-g -Wall -std=c++11 $(shell pkg-config --cflags libftdipp1 libudev)

# libftdi < 1.4 as no usb_addr
ifeq ($(shell pkg-config --atleast-version=1.4 libftdipp1 && echo 1),)
CXXFLAGS+=-DOLD_FTDI_VERSION=1
else
CXXFLAGS+=-DOLD_FTDI_VERSION=0
endif

all:$(EXEC_NAME)

$(EXEC_NAME):$(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

install:
	cp -f openFPGALoader /usr/local/bin
	mkdir -p /usr/local/share/openFPGALoader
	cp -f test_sfl.svf /usr/local/share/openFPGALoader
	cp -f spiOverJtag/*.bit /usr/local/share/openFPGALoader

clean:
	rm -rf *.o
	rm -f $(EXEC_NAME)
	rm -f *.c~ *.h~ Makefile~
	rm -f out*.dat
