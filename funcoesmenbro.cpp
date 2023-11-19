#include <iostream>
#include <iomanip>

using namespace std;

struct Pessoa{
    char nome[50];
    int idade;
    float salario;

    void exibirDados(){
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << fixed << setprecision(4) << "Salario: " << salario << endl;
    }  
};