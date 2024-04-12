set terminal png
set output "outputMinMax2.png"
set title "MinMax2"
set xlabel "Tamanho dos vetores"
set ylabel "Médias de tempo"
set xrange [0:500000]
set yrange [0:2400]
set grid

set term png size 1350, 950

plot "MediaMinMax2.csv" using 1:2 with lines title 'Aleatorio', \
     "MediaMinMax2.csv" using 1:3 with lines title 'Crescente', \
     "MediaMinMax2.csv" using 1:4 with lines title 'Decrescente'
