#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <queue>
#include <string>
#include <functional>

using namespace std;

class Aluno {
public:
    std::string nome;
    int numeroMatricula;
    int ano;
    Aluno() : nome(""), numeroMatricula(0), ano(0) {}
    Aluno(std::string nome, int numeroMatricula, int ano) {
        this->nome = nome;
        this->numeroMatricula = numeroMatricula;
        this->ano = ano;
    }
    bool operator<(const Aluno& aluno) const {
        if (this->ano == aluno.ano)
            return this->numeroMatricula > aluno.numeroMatricula;
        else
            return this->ano > aluno.ano;
    }
};
void pushFila(Aluno& aluno, priority_queue<Aluno>& filaAlunos);
void popAluno(Aluno& aluno, priority_queue<Aluno>& filaAlunos);
void mostraFila(priority_queue<Aluno>& filaAlunos);
void menu(priority_queue<Aluno>& filaAlunos);

#endif