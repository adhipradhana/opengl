all: main.cpp
	clang++ -o main main.cpp -Wall -std=c++11 -stdlib=libc++ -lglfw -lglew -framework OpenGL

run: main.cpp
	clang++ -o main main.cpp -Wall -std=c++11 -stdlib=libc++ -lglfw -lglew -framework OpenGL
	./main

clean:
	rm main