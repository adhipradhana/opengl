all: ./src/main.cpp
	clang++ -o ./bin/main ./src/main.cpp -Wall -std=c++11 -stdlib=libc++ -lglfw -lglew -framework OpenGL

run: ./src/main.cpp
	clang++ -o ./bin/main ./src/main.cpp -Wall -std=c++11 -stdlib=libc++ -lglfw -lglew -framework OpenGL
	./bin/main

clean:
	rm -R bin && mkdir bin