# War

## INTRODUÇÃO

O presente projeto tem por objetivo simular o jogo de guerra e estrategia War,
este jogo vem do jogo americano risk criado pelo francês Albert Lamorisse, que
foi lançado em 1957 com o nome de la conquête du monde("A Conquista do Mundo"),
como dito por Lamorisse o jogo simula a conquista de paises por um jogador, tendo
como vencedor aquele que cumprir os objetivos descritos nas cartas primeiro
tendo conquista o mundo.

## DECISÕES DE IMPLEMENTAÇÃO E ATUALIZAÇÕES DO DIAGRAMA DE CLASSES

### A PRIMEIRA DECISÃO

A primeira decisão feita foi a de começar um diagrama para que pudessemos ter 
noção de quais rumos tomar com o projeto, sua primeira versão segue na imagem:

![first Photograph of diagram](https://user-images.githubusercontent.com/107070061/210263547-2d9d2f4b-599f-457b-9182-0393cd8d7084.png)


### A SEGUNDA DECISÃO

Após ter cido idealizado o projeto, mesmo que parcialmente, ainda não tendo 
toda a estrutura em mente para que fosse agilizado o processo de construção
foi criado as classes ja pensadas no diagrama na sua primeira versão, alem
da implementação de duas perguntas iniciais do game, que seriam o número 
de pariticipantes e seus respectivos nomes, os resultados seguem na seção
de casos de teste. Nesta alteração feita no código fonte não aconteceu 
alteração na constituição das classes, sendo assim o diagrama do projeto 
permaneceu como estava desde a ultima alteração.

### A TERCEIRA DECISÃO

Para que se tornasse mais simples executar o código fonte foi criado um
make file, assim permanecendo sem nenhuma alteração no diagrama.

### A QUARTA DECISÃO

Já que o programa passou a ser capaz de receber o número de jogadores e
seus respectivos nomes, foi tomada a decisão de enviar as informações até
a classe dos jogadores, para isso foi utilizado um objeto do tipo jogador,
e com mesmo era inserido o nome a classe jogador, utilizando a função setnome,
apos fazer essa inserção esse objeto era inserido em uma lista denominada 
jogadores e após a lista é inserida na classe jogadores, como ainda não havia
nos atribuitos uma lista de paises foi adicionado ao diagrama, como mostra o 
print a seguir:

![adicionando lista de paises](https://user-images.githubusercontent.com/107070061/211031442-b43ecf2c-9de5-4839-815a-21fec46446f3.png)

## CASOS DE TESTE E SEUS RESULTADOS

### PRIMEIRO CASO DE TESTE

O primeiro teste a ser realizado era das primeiras perguntas antes do inicio
da dinâmica do jogo, que são a quantidade de participantes e seus nomes, 
foi feito o teste para averiguar se a implementação foi concluida com sucesso,
os resultados seguem no curta metragem a seguir:

https://user-images.githubusercontent.com/107070061/210267714-778d2dca-5d47-4bd3-b034-086b748ce584.mp4


Como é possível ver é mostrado que foi obtido sucesso na compilação, o mesmo
não apresentou nenhum warning, erro de sintaxe ou falha de segmentação, alcançando 
o que era esperado com relação as alterações realizadas no código fonte.