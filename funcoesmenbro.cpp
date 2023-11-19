#include <iostream>
#include <iomanip>
using namespace std;

struct Pessoa {
    char nome[50];
    int idade;
    float salario;

    void exibirDados(){
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << fixed << setprecision(4) << "Salario: " << salario << endl;// Use fixed e setprecision para formatar a saída
    }
};

bool compararIdade(Pessoa p1, Pessoa p2){
    return p1.idade > p2.idade;
}

int main(){
    Pessoa pessoa1, pessoa2;

    cout << "DIgite os dados da primeira pessoa:\n";
    pessoa1.exibirDados();

    cout << "Digite os dados da segunda pessoa:\n";
    pessoa2.exibirDados();

    //Comparar a idade das duas pessoas.
    if(compararIdade(pessoa1, pessoa2)){
        cout << "A primeira pessoa e mais velha.\n";
    }else{
        cout << "A segunda pessoa e mais velha.\n";
    }
    return 0;
}