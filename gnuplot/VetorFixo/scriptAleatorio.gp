set terminal png
set output "outputAleatorio.png"
set title "Aleatorio"
set xlabel "Tamanho dos vetores"
set ylabel "Médias de tempo"
set xrange [0:500000]
set yrange [0:3000]
set grid

set term png size 1350, 950

plot "Aleatorio.txt" using 1:2 with lines title 'MinMax1', \
     "Aleatorio.txt" using 1:3 with lines title 'MinMax2', \
     "Aleatorio.txt" using 1:4 with lines title 'MinMax3'
