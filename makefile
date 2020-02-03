all: makepic.c
	gcc makepic.c
	./a.out
clean:
	rm a.out
	rm picture.ppm
