# ----------------------------------------------------------------------------------------------------------------------
CC=clang
ID=1
TARGET = barf_$(ID)
LINUXHEADERS_BUILD = /lib/modules/$(shell uname -r)/build
CFLAGS = -c -g -O2 -target bpf -Wall

# TARGET:
	# TAB
# ----------------------------------------------------------------------------------------------------------------------


all: $(TARGET).o

clean:
	@rm -rf *.o

$(TARGET).o:
	$(CC) \
	$(CFLAGS) \
	-o $(TARGET).o \
	barf.c

