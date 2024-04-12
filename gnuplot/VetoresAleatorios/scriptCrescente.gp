set terminal png
set output "outputCrescente.png"
set title "Crescente"
set xlabel "Tamanho dos vetores"
set ylabel "Médias de tempo"
set xrange [0:500000]
set yrange [0:2000]
set grid

set term png size 1350, 950

plot "Crescente.csv" using 1:2 with lines title 'MinMax1', \
     "Crescente.csv" using 1:3 with lines title 'MinMax2', \
     "Crescente.csv" using 1:4 with lines title 'MinMax3'
