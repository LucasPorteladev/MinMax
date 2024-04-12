#ifndef MINMAX_HPP
#define MINMAX_HPP

#include <vector>

class MinMax {
public:
    MinMax();
    std::vector<int> randomizaVetor(int n); 
    std::vector<int> ordenaCrescente(std::vector<int>& Vetor); 
    std::vector<int> ordenaDecrescente(std::vector<int>& Vetor);
    void limparArquivo();
    float MinMax1(int n, std::vector<int> Vetor); 
    float MinMax2(int n, std::vector<int> Vetor); 
    float MinMax3(int n, std::vector<int> Vetor); 
    void executaMinMax1(int n, std::vector<int> Vetor);
    void executaMinMax2(int n, std::vector<int> Vetor);
    void executaMinMax3(int n, std::vector<int> Vetor);
    void executar();
};

#endif
