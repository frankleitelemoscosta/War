all:
	g++ ./cpp/main.cpp ./cpp/jogador.cpp ./cpp/tropas.cpp ./cpp/paises.cpp ./hpp/jogador.hpp ./hpp/tropas.hpp ./hpp/paises.hpp -o executavel

clean:
	rm -rf executavel

run:
	./executavel