set terminal png
set output "outputDecrescente.png"
set title "Decrescente"
set xlabel "Tamanho dos vetores"
set ylabel "Médias de tempo"
set xrange [0:500000]
set yrange [0:2000]
set grid

set term png size 1350, 950

plot "Decrescente.txt" using 1:2 with lines title 'MinMax1', \
     "Decrescente.txt" using 1:3 with lines title 'MinMax2', \
     "Decrescente.txt" using 1:4 with lines title 'MinMax3'
