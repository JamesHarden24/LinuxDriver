#!/bin/bash

obj-m += mini_linux_module.o

KDIR := /home/topeet/****/iTop4412_Kernel_3.0

PWD ?= $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *.o