#build module outside of the source tree
# CC=gcc default value 

obj-m += task01.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	
	