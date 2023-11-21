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
        cout << fixed << setprecision(4) << "Salario: " << salario << endl;
    }

    void atualizarDados(){
        cout << "Digite o nome: ";
        cin.getline(nome, 50);
        cout << "Digite a idade: ";
        cin >> idade;
        cin.ignore();
        cout << "Digite o salario: ";
        cin.ignore(); //ignora o caracter de nova linha no buffer.
        cin >> salario;
        cin.ignore();
    }
};

bool compararIdade(Pessoa p1, Pessoa p2){
    return p1.idade > p2.idade;
}

int diferencaIdade(Pessoa p1, Pessoa p2){
    return abs(p1.idade - p2.idade);
}

bool compararSalario(Pessoa p1, Pessoa p2){
    return p1.salario > p2.salario;
}
int main(){
   Pessoa pessoa1, pessoa2; //Cria dois objetos da estrutura Pessoa.

   //Preenche os dados da primeira pessoa.
   cout << "Digite os dados da primeira pessoa:\n";
   pessoa1.atualizarDados();

   //Preenche os dados da segunda pessoa.
   cout << "Digite os dados da segunda pessoa:\n";
   pessoa2.atualizarDados();

   // Compara a idade das duas pessoas.
   if(compararIdade(pessoa1, pessoa2)){
       cout << "A primeira pessoa e mais velha.\n";
   } else {
       cout << "A segunda pessoa e mais velha.\n";
   }
    //Calcula e exibe a diferença de idade.
    cout << "A diferenca de idade entre as duas pessoas e de " << diferencaIdade(pessoa1, pessoa2) << " anos.\n";

    //Compara os salarios das duas pessoas.
    if(compararSalario(pessoa1, pessoa2)){
        cout << "A primeira pessoa tem um salario maioir.\n";
    }else{
        cout << "A segunda pessoa tem um salario maior.\n";
    }
   return 0;
}
