# Revisão

## 1. Qual é, em termos gerais, a distinção entre a organização e a arquitetura de um computador?

Arquitetura se constitúi nos componentes presentes em um computador que relizará e processará suas instruções. Organização se constitui nas inter-relações de cada componente.

## 2. Qual é, em termos gerais, a distinção entre a estrutura e a função do computador?

A função de um computador é receber, armazenar e processar dados, já a arquitetura de um computador, é a estrutura necessária para realizar essas funções.

## 3. Quais são as quatro principais funções de um computador?

Receber, armazenar, processar e exibir dados.

## 4. Liste e defina resumidamente os principais componentes estruturais de um computador (IAS).

A estrutura de um computador IAS é constituída por 4 componentes, cada um podendo conter diversos subcomponentes para realizar sua tarefa que foi designidada. Estes componentes são:

- Unidade de entrada e saída: Componente que lida com os dados de entrada e saída, se especializa no tratamento dos dados externos ou internos.

- Memória: Componente responsável por armazenar dados e instruções que foram alimentadas ao computador.

- Unidade de lógica e aritmética: Unidade responsável por realizar operações e cálculos com números binários.

- Unidade de controle: Componente responsável por controlar o fluxo do programa, armazenar dados em memória, e auxiliar o processo sequencial de cálculos e instruções.

## 5. Leia e defina resumidamente os principais componentes estruturais de um processador (IAS).

Um processador do computador IAS é definido em duas partes, a ALU (Unidade Lógica e Aritmética), e a CU (Unidade de Controle), cada uma dessas partes se responsabiliza com uma tarefa, possívelmente se relacionando com componentes externos a CPU, como a E/S (Entrada/Saída) e com a Memória (M).

Dentro da ALU temos os seguintes componentes:

- MBR (Memory Buffer Register): Contém uma "palavra" que será armazenada na memória ou enviada ao componente de entrada e saída.

- AC (Accumulator) e MQ (Multiplier Quotient): Mantém operandos temporários, além de resultados de operações realizadas na ULA.

- MAR (Memory Address Register): Componente responsável por armazenar uma palavra na memória.

- IR (Instruction Register): Armazena a próxima parte direita de uma palavra.

- PC (Program Counter): Contém o endereço do próximo par de instruções a ser pego na memória.