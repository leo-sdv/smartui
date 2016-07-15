SOURCES=$(wildcard ./src/*.cpp)
OBJS=${SOURCES:%.c=${BUILDDIR}/%.o}

all:app.cpp ${SOURCES}
	g++ $^ -lglut -lGL -lGLU -I ./include
