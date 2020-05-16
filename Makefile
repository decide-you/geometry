.PHONY: clean all run
all:bin/program
bin/program:build/src/main.o build/src/figurecheck.o build/src/printfunc.o
	g++ -Wall -Werror build/src/main.o build/src/figurecheck.o build/src/printfunc.o -o bin/program -lm
build/src/figurecheck.o:src/figurecheck.cpp
	g++ -Wall -Werror -c src/figurecheck.cpp -o build/src/figurecheck.o
build/src/main.o:src/main.cpp
	g++ -I src -Wall -Werror -c src/main.cpp -o build/src/main.o
build/src/printfunc.o:src/printfunc.cpp
	g++ -Wall -Werror -c src/printfunc.cpp -o build/src/printfunc.o
run:
	./bin/program
clean:
	rm -rf build/src/*.o bin/program
