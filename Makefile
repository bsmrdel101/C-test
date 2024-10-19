CC=gcc

all: app run

app: src/main.c
	$(CC) -o app src/main.c

run: app
	./app.exe

clean:
	rm app
