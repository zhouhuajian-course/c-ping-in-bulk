# .RECIPEPREFIX=
BINDIR?=./bin
BINPATH=$(BINDIR)/ping-in-bulk
ifeq ($(OS), Windows_NT)
	# := 解决递归引用问题
	# Recursive variable 'BINPATH' references itself
	BINPATH:=$(subst /,\,$(BINPATH)).exe
endif

all:
	gcc -std=c99 -I ./include -o $(BINPATH) ./src/ping-in-bulk.c

clean:
ifeq ($(OS), Windows_NT)
	del $(BINPATH)
else
	rm $(BINPATH)
endif

#test:
#	echo ${MAKE}
