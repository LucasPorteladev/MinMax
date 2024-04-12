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

![Captura de tela de 2024-04-08 12-34-05](https://github.com/LucasPorteladev/MinMax/assets/112915278/e6f67e9f-07b1-4551-a416-0e7831d6744b)

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

![PlanilhaAleatorio](https://github.com/LucasPorteladev/MinMax/assets/112915278/4efbb996-2020-48dc-940d-6970c6fb736b)


## Planilha Tempos - Vetor Fixo

![PlanilhaFixo](https://github.com/LucasPorteladev/MinMax/assets/112915278/8a2866de-3aed-4542-8d55-ae27e0624aa1)


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
![outputMinMax1](https://github.com/LucasPorteladev/MinMax/assets/112915278/79358268-6ab0-41ab-9a4c-0205f657c740)  |  ![outputMinMax1](https://github.com/LucasPorteladev/MinMax/assets/112915278/d177e62b-d571-46a9-a8f9-3addc3245be8)

 
MinMax2 - Vetor Fixo       |  MinMax2 - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputMinMax2](https://github.com/LucasPorteladev/MinMax/assets/112915278/d0bd7a5a-9809-4333-a6ba-8f14a7d98fd8)  |  ![outputMinMax2](https://github.com/LucasPorteladev/MinMax/assets/112915278/c976ca52-089b-469f-9d2c-bc71a72ba309)


 MinMax3 - Vetor Fixo      |  MinMax3 - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputMinMax3](https://github.com/LucasPorteladev/MinMax/assets/112915278/1d4c025b-9c89-45e5-964c-e404a55fa188)  |  ![outputMinMax3](https://github.com/LucasPorteladev/MinMax/assets/112915278/15433a8b-e0e7-4ad5-9af3-e6dcf4d4af00)


Aleatorio - Vetor Fixo     |  Aleatorio - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputAleatorio](https://github.com/LucasPorteladev/MinMax/assets/112915278/d087478d-607d-4cf5-932a-6aa818f289ea)  |  ![outputAleatorio](https://github.com/LucasPorteladev/MinMax/assets/112915278/e6bdbf73-88e3-4769-92df-f237cbb5ca7a)



Crescente - Vetor Fixo     |  Crescente - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputCrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/0a3fbde3-f29b-4103-86b3-394c640a459d)  |  ![outputCrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/fb6d919a-907e-42db-82b1-fd4215fc7d11)



Decrescente - Vetor Fixo   |  Decrescente - Vetores Aleatorios
:-------------------------:|:-------------------------:
![outputDecrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/5527925c-d57e-4cec-8bb0-4c83a7fdd9d9)  |  ![outputDecrescente](https://github.com/LucasPorteladev/MinMax/assets/112915278/b85c8d4f-59ab-47a5-b0fc-ac1847bd78eb)



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

#  Conclusão

Afinal, o que podemos concluir?

Após analisar todos os resultados obtidos, podemos concluir que a performance dos algoritmos irá depender consideravelmente da massa de dados fornecida. No entanto, através dos resultados, pode-se concluir que o MinMax3 se mostra mais consistente com vetores ordenados, porém tem um desempenho inferior com vetores preenchidos aleatoriamente. O MinMax1 demonstra ter um custo constante de 2(n-1), visto que não foram encontradas grandes variações de tempo durante todos os testes. Por fim, o MinMax2 demonstra ter resultados piores que o MinMax1 em diversos testes realizados, o que vai contra a tabela de resultados esperados apresentada no início do README.

#                            Compilação e Execução

O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

| Comando                |  Função                      |                     
| -----------------------| ---------------------------- |
|  `make r`              | Compilar o código            |
