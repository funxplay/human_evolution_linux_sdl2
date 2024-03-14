build:
	gcc -Wall -std=c99 ./*.c -o main -lSDL2 -lSDL2_ttf -lSDL2_image -lSDL2_mixer

run:
	./main

clean:
	rm main

br:
	gcc -Wall -std=c99 ./*.c -o main -lSDL2 -lSDL2_ttf -lSDL2_image -lSDL2_mixer
	./main
