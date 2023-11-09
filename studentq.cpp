//#include <iostream>
//#include <queue>
//#include <string>
//#include <functional>
#include "student.h"
//using namespace std;



void pushFila(Aluno& aluno, priority_queue<Aluno>& filaAlunos){
    // Check if the Aluno's attributes are set correctly
    if (!aluno.nome.empty() && aluno.numeroMatricula > 0 && aluno.ano <= 4 && aluno.ano > 0) {
        filaAlunos.push(aluno);
    } else {
        cout << "Erro." << endl;
    }
    //filaAlunos.push(aluno);
}


void popAluno(Aluno& aluno,priority_queue<Aluno>& filaAlunos){
    if(!filaAlunos.empty()){
        filaAlunos.pop();
    } else {
        printf("Todos foram servidos!\n");
    }
}

void mostraFila(priority_queue<Aluno>& filaAlunos){
    priority_queue<Aluno> filaAux;

    while(!filaAlunos.empty()){
        filaAux.push(filaAlunos.top());
        filaAlunos.pop();
    }

    while(!filaAux.empty()){
            
        printf("Aluno: %s | N. Matricula: %d | Ano: %d\n", filaAux.top().nome.c_str(), filaAux.top().numeroMatricula, filaAux.top().ano);        filaAlunos.push(filaAux.top());
        filaAux.pop();
    }

    if(filaAlunos.empty()){
        printf("Nao ha alunos na fila!\n");
    }
}
void menu(priority_queue<Aluno>& filaAlunos){
    int option = 0;
    Aluno aluno;
    cout << "1 - Adicionar aluno na fila" << endl;
    cout << "2 - Servir aluno" << endl;
    cout << "3 - Mostrar fila" << endl;
    cout << "4 - Sair" << endl;

    cin >> option;
    switch (option){
    case 1:
        printf("Nome: ");
        cin >> aluno.nome;
        printf("Numero de Matricula: ");
        cin >> aluno.numeroMatricula;
        printf("Ano: ");
        cin >> aluno.ano;
        pushFila(aluno, filaAlunos);
        break;
    case 2:
        popAluno(aluno, filaAlunos);
        break;
    case 3:
        mostraFila(filaAlunos);
        break;
    case 4:
        exit(0);
        break;
    default:
        break;
    }
}
