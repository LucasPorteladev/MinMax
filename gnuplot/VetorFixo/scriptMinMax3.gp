set terminal png
set output "outputMinMax3.png"
set title "MinMax3"
set xlabel "Tamanho dos vetores"
set ylabel "Médias de tempo"
set xrange [0:500000]
set yrange [0:3200]
set grid

set term png size 1350, 950

plot "MediaMinMax3.txt" using 1:2 with lines title 'Aleatorio', \
     "MediaMinMax3.txt" using 1:3 with lines title 'Crescente', \
     "MediaMinMax3.txt" using 1:4 with lines title 'Decrescente'
