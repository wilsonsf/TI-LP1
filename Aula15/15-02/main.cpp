/**
 * Escreva um programa que solicita ao usuário a quantidade de alunos de uma 
 * turma e aloca um vetor de notas (números reais). Depois de ler as notas de
 * todos os alunos, seu programa deverá imprimir a média aritmética da turma.

 * Obs: note que não deve ocorrer desperdício de memória, e após a utilização
 * da memória, ela deve ser liberada.

    Desenvolvido por Wilson de Farias
    Disciplina: Linguagem de Programação 1
    Curso: Bacharelado em Tecnologia da Informação
    Data: 22/09/2015

 */ 

// Linha de compilação: g++ main.cpp -o teste

#include <iostream>
#include <iomanip>

int main () {
    int numeroDeAlunos;
    std::cout << "Insira o numero de alunos: ";
    std::cin >> numeroDeAlunos;

    double *notasDosAlunos = new double[numeroDeAlunos];

    if (notasDosAlunos) {
        double somatorioDeNotas = 0;

        for (int i = 0; i < numeroDeAlunos; i++) {
            std::cout << "Insira a nota para o aluno " << i+1 << ": ";
            std::cin >> notasDosAlunos[i];

            somatorioDeNotas+= notasDosAlunos[i];
        }

        double media = somatorioDeNotas / numeroDeAlunos;

        std::cout << "Média das notas dos alunos: " 
            << std::setprecision(2) << media << std::endl;
    }
    
    if (notasDosAlunos)
        delete notasDosAlunos;

    return 0;
}