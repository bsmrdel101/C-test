CC=gcc

all: app run

app: src/main.c
	$(CC) -o build/app src/main.c

run: app
	./build/app.exe

clean:
	rm build/app
