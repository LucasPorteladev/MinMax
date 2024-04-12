#include "MinMax.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include <fstream>

using namespace std;

MinMax::MinMax(){
    // Construtor vazio da classe
}

vector<int> MinMax::randomizaVetor(int n) {
    vector<int> Vetor(n);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 1000);

    // Preenchendo o vetor com valores aleatórios
    for (int i = 0; i < n; ++i) {
        Vetor[i] = dist(gen);
    }

    return Vetor;
}

vector<int> MinMax::ordenaCrescente(vector<int>& Vetor) {
    sort(Vetor.begin(), Vetor.end());
    return Vetor;
}

vector<int> MinMax::ordenaDecrescente(vector<int>& Vetor) {
    sort(Vetor.begin(), Vetor.end(), [](int a, int b) { return a > b; });
    return Vetor;
}

float MinMax::MinMax1(int n, vector<int> Vetor) {
    int MAX = Vetor[0];
    int MIN = Vetor[0];

    auto start = chrono::high_resolution_clock::now();

    for (int i = 1; i < n; i++) {
        if (Vetor[i] < MIN) MIN = Vetor[i];
        if (Vetor[i] > MAX) MAX = Vetor[i];
    }

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    return duration.count();
}

float MinMax::MinMax2(int n, vector<int> Vetor) {
    int MAX = Vetor[0];
    int MIN = Vetor[0];

    auto start = chrono::high_resolution_clock::now();

    for (int i = 1; i < n; i++) {
        if (Vetor[i] > MAX) MAX = Vetor[i];
        else if (Vetor[i] < MIN) MIN = Vetor[i];
    }

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    return duration.count();
}

float MinMax::MinMax3(int n, vector<int> Vetor) {
    int MAX;
    int MIN;
    int i = 0, FimDoAnel = 0;

    auto start = chrono::high_resolution_clock::now();

    if (n % 2 > 0) {
        Vetor.push_back(Vetor[n - 1]);
        FimDoAnel = n;
    } else {
        FimDoAnel = n - 1;
    }

    if (Vetor[0] > Vetor[1]) {
        MAX = Vetor[0];
        MIN = Vetor[1];
    } else {
        MAX = Vetor[1];
        MIN = Vetor[0];
    }

    i = 2;

    while (i <= FimDoAnel) {
        if (Vetor[i] > Vetor[i + 1]) {
            if (Vetor[i] > MAX) MAX = Vetor[i];
            if (Vetor[i + 1] < MIN) MIN = Vetor[i + 1];
        } else {
            if (Vetor[i + 1] > MAX) MAX = Vetor[i + 1];
            if (Vetor[i] < MIN) MIN = Vetor[i];
        }
        i = i + 2;
    }

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    return duration.count();
}

void MinMax::executaMinMax1(int n, vector<int> Vetor) {
    ofstream arquivo("results/MinMax1.txt", ios::app);

    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

    arquivo << n << " ";

    arquivo << MinMax1(n, Vetor) << " ";

    vector<int> VetorCrescente = ordenaCrescente(Vetor);
    arquivo << MinMax1(n, VetorCrescente) << " ";

    vector<int> VetorDecrescente = ordenaDecrescente(Vetor);
    arquivo << MinMax1(n, VetorDecrescente) << endl;

    arquivo.close();
}

void MinMax::executaMinMax2(int n, vector<int> Vetor) {
    ofstream arquivo("results/MinMax2.txt", ios::app);

    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

    arquivo << n << " ";
    arquivo << MinMax2(n, Vetor) << " ";

    vector<int> VetorCrescente = ordenaCrescente(Vetor);
    arquivo << MinMax2(n, VetorCrescente) << " ";

    vector<int> VetorDecrescente = ordenaDecrescente(Vetor);
    arquivo << MinMax2(n, VetorDecrescente) << endl;

    arquivo.close();
}

void MinMax::executaMinMax3(int n, vector<int> Vetor) {
    ofstream arquivo("results/MinMax3.txt", ios::app);

    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

    arquivo << n << " ";
    arquivo << MinMax3(n, Vetor) << " ";

    vector<int> VetorCrescente = ordenaCrescente(Vetor);
    arquivo << MinMax3(n, VetorCrescente) << " ";

    vector<int> VetorDecrescente = ordenaDecrescente(Vetor);
    arquivo << MinMax3(n, VetorDecrescente) << endl;

    arquivo.close();
}

void MinMax::executar() {
    vector<int> v = {1000, 10000, 100000, 500000};

    vector<vector<int>> Vetores;

    for (int i = 0; i < 4; i++) {
        Vetores.push_back(randomizaVetor(v[i]));
    }

    limparArquivo(); 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            int n = v[j];
            executaMinMax1(n, Vetores[j]);
            executaMinMax2(n, Vetores[j]);
            executaMinMax3(n, Vetores[j]);
        }
    }
}

void MinMax::limparArquivo() {
    ofstream MinMax1("results/MinMax1.txt", ios::trunc);

    if (!MinMax1) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

    MinMax1.close();

    ofstream MinMax2("results/MinMax2.txt", ios::trunc);

    if (!MinMax2) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

    MinMax2.close();

    ofstream MinMax3("results/MinMax3.txt", ios::trunc);

    if (!MinMax3) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

    MinMax3.close();
}
