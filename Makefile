# .RECIPEPREFIX=
all:
ifeq ($(OS), Windows_NT)
	gcc -std=c99 -I .\include -o .\bin\ping-in-bulk.exe .\src\ping-in-bulk.c
else
	gcc -std=c99 -I ./include -o ./bin/ping-in-bulk ./src/ping-in-bulk.c
endif

clean:
ifeq ($(OS), Windows_NT)
	del .\bin\ping-in-bulk.exe
else
	rm ./bin/ping-in-bulk
endif
