Simulação de Movimentos de Peças de Xadrez

Este projeto implementa uma simulação em linguagem C dos movimentos de quatro peças de xadrez: Torre, Bispo, Rainha e Cavalo.
O programa tem como objetivo demonstrar o uso de recursividade e estruturas de repetição (for, while, do-while), aplicadas de forma prática e organizada.

O desafio consiste em aprimorar o programa básico de movimentação de peças, substituindo os loops simples por funções recursivas e incorporando estruturas mais complexas, como loops aninhados e controle de fluxo com break e continue.

Estrutura do Código

O arquivo principal do projeto é xadrez_avancado.c.
Ele contém as seguintes funções e características:

1. Função moverTorre()

Tipo de controle: Recursividade + for

Movimento: 5 casas para a direita

Descrição: A cada chamada recursiva, a Torre move uma casa para a direita. O loop for é usado para exibir a ação a cada iteração.

2. Função moverBispo()

Tipo de controle: Recursividade + while aninhado

Movimento: 5 casas na diagonal (cima e direita)

Descrição: O movimento diagonal é simulado com loops while aninhados, representando o deslocamento vertical e horizontal. A recursão controla o número de movimentos.

3. Função moverRainha()

Tipo de controle: Recursividade + do-while

Movimento: 8 casas para a esquerda

Descrição: A recursão define a sequência de movimentos, enquanto o do-while garante que a ação seja executada pelo menos uma vez em cada chamada.

4. Função moverCavalo()

Tipo de controle: for aninhado + break e continue

Movimento: Em "L" (duas casas para cima e uma para a direita)

Descrição: Utiliza loops aninhados e controle de fluxo para simular o movimento característico do cavalo.
O continue evita movimentos diagonais e o break encerra o loop após um movimento completo.

Estruturas de Repetição Utilizadas
Estrutura	Utilização	Peça Associada
for	Controle dentro da função recursiva da Torre	Torre
while	Loops aninhados na função recursiva do Bispo	Bispo
do-while	Impressão controlada dentro da recursão da Rainha	Rainha
for aninhado com break e continue	Simulação de movimento em “L”	Cavalo
