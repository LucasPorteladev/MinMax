# README - Análise Comparativa de Implementações do Algoritmo Minimax

Este repositório contém os códigos desenvolvidos para realizar uma análise comparativa de três implementações distintas do algoritmo Minimax, conforme discutido durante as aulas teóricas. O objetivo deste trabalho é investigar como diferentes implementações do algoritmo Minimax se comportam em relação ao desempenho em diferentes cenários de entrada.

## Introdução

Durante as aulas teóricas, foram apresentadas três implementações diferentes do algoritmo Minimax, cada uma com suas características e abordagens específicas.

Para compreender melhor o impacto prático dessas implementações, este trabalho propõe a implementação em C/C++ dos algoritmos Minimax1, Minimax2 e Minimax3, seguido de uma avaliação comparativa de seus desempenhos utilizando diferentes tamanhos de entrada.

## Objetivos

1. **Implementação dos Algoritmos**: Implementar os algoritmos Minimax1, Minimax2 e Minimax3 em C/C++, seguindo as melhores práticas de programação.

2. **Avaliação dos Métodos**: Avaliar o desempenho dos algoritmos utilizando diferentes tamanhos de entrada (1000, 10.000, 100.000 e 500.000 elementos do tipo inteiro) e calculando o tempo médio de execução a partir de 10 execuções para cada tamanho de entrada.

3. **Elaboração de Planilha e Gráficos**: Elaborar uma planilha no Excel para analisar as relações de tempo de forma gráfica, categorizando os dados por classes e detalhando as comparações por algoritmo e ordem dos dados.

4. **Disponibilização do Código no Git**: Subir o código desenvolvido para um repositório Git, detalhando os experimentos realizados e relacionando-os com os conceitos de análise assintótica discutidos em sala.

5. **Pontos Extras com gnuplot**: Utilizar o gnuplot para plotar os gráficos e disponibilizar o script utilizado para geração junto com o código no Git.

## Arquivos do Código

- **main.cpp**
- **MinMax.cpp**
- **MinMax.hpp**

## Explicação das Funções 

- **randomizaVetor**: A função recebe um valor "N" e cria um vetor com valores randomicos de 0 à 1000 com tamanho "N".
- **ordenaCrescente**: A função recebe um vetor e ordena de forma crescente utilizando a função sort.
- **ordenaDecrescente**: A função recebe um vetor e ordena de forma decrescente utilizando a função sort.
- **limparArquivo**: A função abre todos os arquivos para limpar os resultados da execução anterior.
- **MinMax1, 2 e 3**: As funções executam os diferentes algoritmos explicados em sala.
- **executaMinMax1, 2 e 3**: As funções organizam a ordem de execução do código de modo geral.
- **executar**: A única função chamada na main, apenas executa todo o código.

## Bibliotecas Utilizadas

- **algorithm**: Para organizar os vetores em ordem crescente e decrescente, a biblioteca utilizada foi a algorithm.
- **chronos**: Para medir o tempo de todas as execuções, a biblioteca utilizadas foi a chrono.
- **fstream**: Para manipular arquivos para leitura e escrita, a biblioteca fstream foi utilizada.
- **random**: Para gerar os valores aleatórios para preencher o vetor, a biblioteca utilizada foi a random.

## Resultados Esperados

O comportamento esperado dos algoritmos, tem base na tabela de tempos abaixo:

![tabela](https://github.com/LucasPorteladev/MinMax/assets/112915278/ac4ed20a-7b27-455b-a613-da6960ace983)

Os algoritmos devem respeitar os tempos estabelecidos e explicados em sala de aula.

## Testes Realizados

Com o objetivo de testar o desempenho dos algoritmos em diferentes cenarios, foram feitos dois testes diferentes:

- **Vetor Fixo**
- **Vetor Aleatorio**

No primeiro teste realizado, foram utilizados vetores diferentes em cada uma das 10 execucoes do programa, para analisar o comportanto dos algoritmos com a entrada de uma massa de dados aleatoria a cada execucao. Depois, foram realizados testes 
utilizando o mesmo vetor em todas as 10 execucoes do programa. O principal objetivo desse experimento, era ver como seria a variacao no tempo de execucao.

## Resultados Obtidos

Após cada execução do código, são criados 3 arquivos:

- **MinMax1.txt**
- **MinMax2.txt**
- **MinMax3.txt**

Esses arquivos contém os resultados obtidos pelo código, dentro deles os resultados são encontrados na seguinte formatação:

| Tamanho do vetor | Tempo aleatório | Tempo crescente | Tempo decrescente |
|------------------|-----------------|-----------------|-------------------|
| 1000             | 3               | 7               | 7                 |
| 10000            | 30              | 39              | 48                |
| 100000           | 295             | 301             | 304               |
| 500000           | 1486            | 1469            | 1453              |

Após ter os resultados escritos em um arquivo txt, esses resultados foram transferidos para uma planilha feita no LibreOffice, logo abaixo estao as planilhas referentes aos testes realizados:

## Planilha Tempos - Vetores Aleatorios

![Captura de tela de 2024-04-12 17-08-32](https://github.com/LucasPorteladev/MinMax/assets/112915278/77e11b76-072d-4946-baeb-1df6012f6fd3)

## Planilha Tempos - Vetor Fixo

![Planilha](https://github.com/LucasPorteladev/MinMax/assets/112915278/fcc7f88c-f2d8-4ec8-a08b-937176abe69c)

Com a ajuda das planilhas as médias dos tempos de execução de cada algoritmo foram encontradas, com os valores obtidos foram criados 6 arquivos (.txt) distintos, para cada teste, sendo eles:

- **Aleatorio.txt**
- **Crescente.txt**
- **Decrescente.txt**
- **MediaMinMax1.txt**
- **MediaMinMax2.txt**
- **MediaMinMax3.txt**

Esses arquivos foram utilizados para a plotagem dos gráficos criados pelo gnuplot, para tornar mais facil a missao de entender a diferenca dos algoritmos.

## Gnuplot

Os arquivos referentes ao gnuplot podem ser encontrados na pasta gnuplot, lá serão encontrados os arquivos de texto usados para a criação dos gráficos e os scripts utilizados.

Logo abaixo, estão os gráficos criados:

MinMax1 - Vetor Fixo       |  MinMax1 - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputMinMax1](https://github.com/LucasPorteladev/MinMax/assets/112915278/2b186fc2-3c9f-42cc-9374-39f409061c00) |  ![outputMinMax1](https://github.com/LucasPorteladev/MinMax/assets/112915278/82fbc8ad-a6ea-4c82-8e78-7d0d0faaf5a1)
 
MinMax2 - Vetor Fixo       |  MinMax2 - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputMinMax2](https://github.com/LucasPorteladev/MinMax/assets/112915278/68fb1b40-1978-4874-b9d1-6aa2c3e9db45) |  ![outputMinMax2](https://github.com/LucasPorteladev/MinMax/assets/112915278/0fe9f446-ae7d-4a22-9a86-ad0ceb0a98c9)


 MinMax3 - Vetor Fixo      |  MinMax3 - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputMinMax3](https://github.com/LucasPorteladev/MinMax/assets/112915278/8d2d6c4a-2db3-475f-9d75-03d47b06127f) |  ![outputMinMax3](https://github.com/LucasPorteladev/MinMax/assets/112915278/102923f8-cc34-48dc-a9e3-13a35e04208d)

Aleatorio - Vetor Fixo     |  Aleatorio - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputAleatorio](https://github.com/LucasPorteladev/MinMax/assets/112915278/acd643b9-0853-4ffd-bd16-5081ea25ea56) |  ![outputAleatorio](https://github.com/LucasPorteladev/MinMax/assets/112915278/207f8c44-080d-47b5-ae77-f137d33104d2)


Crescente - Vetor Fixo     |  Crescente - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputCrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/8b28d20f-6f75-419a-b479-c450b8e701de) |  ![outputCrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/d8a4f9c1-dc9a-40bd-8690-bb7c3f33cc94)


Decrescente - Vetor Fixo   |  Decrescente - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputDecrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/841762e8-b7ec-44a9-b37f-56c0e2a75f90) |  ![outputDecrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/1cfcf425-3dc3-43bd-8102-aff4f894a756)


## Análise dos Gráficos

**MinMax1**: No gráfico do MinMax1, é evidente que a ordenação do vetor não impacta significativamente nos resultados de tempo obtidos, as retas são muito próximas. No entanto, essa diferença é menor ainda com Vetor Fixo, inclusive é interessante observar que o algoritmo se tornou mais eficaz com Vetor Fixo.

**MinMax2**: No gráfico do MinMax2, é evidente que a ordenação do vetor impacta ainda menos no resultado do algoritmo, as retas continuam extremamente próximas. No entanto, nesse algoritmo o uso de Vetor Fixo impactou negativamente na eficácia do algoritmo, que apresentou tempos piores com essa alteração, o Vetor ordenado Crescente foi o que mais sofreu impacto.

**MinMax3**: No gráfico do MinMax3, é evidente que a ordenação do vetor impacta muito no desempenho do algoritmo, quando o vetor é aleatório o tempo no final da execução é quase o dobro das execuções com vetor ordenado. Além disso, é válido ressaltar que o uso de Vetor Fixo ou Aleatório não impactou significativamente o algoritmo, o gráfico se manteve igual, o que mostra o comportamento esperado, MinMax3 é mais constante que os demais algoritmos.

**Aleatório**: No gráfico do Aleatório, o MinMax3 representa a função ômega, o MinMax2 a função theta e o MinMax1 a função O. Sendo assim, o MinMax1 é o mais eficaz com vetores aleatórios. Além disso, na comparação dos 2 gráficos fica evidente a melhora de desempenho dos algoritmos quando o Vetor Fixo é fornecido.

**Crescente**: No gráfico do Crescente, o MinMax3 representa a função O, o MinMax2 a função ômega e o MinMax1 a função theta. Sendo assim, o MinMax3 é o mais eficaz com vetores crescentes. Além disso, assim como na comparação do Aleatório, fica evidente que a alteração dos vetores fornecidos aos algoritmos impacta o resultado das execuções, com os vetores fixos os algoritmos apresentam um comportamento quase que idêntico.

**Decrescentes**: No gráfico do Decrescente, o resultado do Crescente se repete, provando assim que o MinMax3 é o melhor algoritmo com vetores ordenados. No entanto, dos 3 métodos de ordenação, este mostra um comportamento diferente dos demais, os tempos de execução com os vetores fornecidos aleatoriamente são menores, o que pode ser explicado por uma possível massa de dados ruim na hora do teste com Vetor Fixo.

Mas afinal, o que os gráficos demonstram?

Analisando as funções representadas nos gráficos, fica evidente que o MinMax3 não lida bem com vetores aleatórios e pequenos. No entanto, com vetores ordenados e maiores, a vantagem do MinMax3 se torna evidente. Se testássemos vetores ainda maiores, provavelmente veríamos uma vantagem ainda maior do algoritmo MinMax3. Em contraponto, o MinMax2 assume o comportamento oposto: quanto maior o vetor, pior é o desempenho do algoritmo. Já o MinMax1 demonstra quase sempre o mesmo comportamento, por ser um algoritmo mais simples que sempre percorrerá todos os elementos do vetor, os resultados não variam muito.

Além disso, fica evidente que o desempenho dos algoritmos melhora quando é fornecido um Vetor Fixo. No entanto, a massa de dados pode influenciar nos resultados de tempo, como pode ser observado no gráfico Decrescentes, onde o Vetor Fixo apresentou um desempenho pior quando comparado aos algoritmos recebendo Vetores Aleatórios como entrada.

## Organização do Repositório

- **src/**: Contém os códigos fonte dos algoritmos Minimax1, Minimax2 e Minimax3.
- **results/**: Contém os resultados das execuções dos algoritmos.
- **docs/**: Documentação adicional, se aplicável.
- **gnuplot/**: Scripts e arquivos de configuração para geração de gráficos com gnuplot.

## Ambiente de Execução

- **Processador**: Ryzen 5600x 3.70 gHz
- **Placa de Vídeo**: GT 1050ti
- **Memória RAM**: 16GB 2400MHz
- **Placa Mãe**: B450M Gigabyte
- **Disco**: SDD 1TB Kingston
- **IDE**: Visual Studio Code
- **SO**: Linux Ubuntu 

#  Conclusao

Afinal, o que podemos concluir?

Após analisar todos os resultados obtidos, podemos concluir que a performance dos algoritmos irá depender consideravelmente da massa de dados fornecida. No entanto, através dos resultados, pode-se concluir que o MinMax3 se mostra mais consistente com vetores ordenados, porém tem um desempenho inferior com vetores preenchidos aleatoriamente. O MinMax1 demonstra ter um custo constante de 2(n-1), visto que não foram encontradas grandes variações de tempo durante todos os testes. Por fim, o MinMax2 demonstra ter resultados piores que o MinMax1 em diversos testes realizados, o que vai contra a tabela de resultados esperados apresentada no início do README.

#                            Compilação e Execução

O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

| Comando                |  Função                      |                     
| -----------------------| ---------------------------- |
|  `make r`              | Compilar o código            |
