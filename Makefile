all:
	g++ ./cpp/main.cpp ./cpp/jogador.cpp ./cpp/mundo.cpp ./cpp/paises.cpp ./hpp/jogador.hpp ./hpp/mundo.hpp ./hpp/paises.hpp -o executavel

clean:
	rm -rf executavel

run:
	./executavel