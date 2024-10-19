CC=gcc

all: app run

app: main.c
	$(CC) -o app main.c

run:
	./app.exe

clean:
	rm app
