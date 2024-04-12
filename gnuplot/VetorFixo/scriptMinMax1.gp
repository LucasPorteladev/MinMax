set terminal png
set output "outputMinMax1.png"
set title "MinMax1"
set xlabel "Tamanho dos vetores"
set ylabel "Médias de tempo"
set xrange [0:500000]
set yrange [0:2400]
set grid

set term png size 1350, 950

plot "MediaMinMax1.txt" using 1:2 with lines title 'Aleatorio', \
     "MediaMinMax1.txt" using 1:3 with lines title 'Crescente', \
     "MediaMinMax1.txt" using 1:4 with lines title 'Decrescente'
