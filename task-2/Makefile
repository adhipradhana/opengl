all: ./src/main.cpp
	clang++ -o ./bin/main ./src/main.cpp -Wall -std=c++11 -stdlib=libc++ -lglfw -lglew -framework OpenGL

run: ./src/main.cpp
	clang++ -o ./bin/main ./src/main.cpp -Wall -std=c++11 -stdlib=libc++ -lglfw -lglew -framework OpenGL
	./bin/main

clean:
	rm -R bin && mkdir bin

run2: ./src/main2.cpp
	clang++ -o ./bin/main2 ./src/main2.cpp ./src/loadShader.cpp -Wall -std=c++11 -stdlib=libc++ -lglfw -lglew -framework OpenGL
	./bin/main2