CC = gcc
CFLAGS = -g
RM = rm -f

default: all

all: stars hollowStars
stars: stars.c
	${CC} ${CFLAGS} -o stars stars.c
hollowStars: hollowStars.c
	${CC} ${CFLAGS} -o hollowStars hollowStars.c
clean veryclean:
	${RM} tempconvert