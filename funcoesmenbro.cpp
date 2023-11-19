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
<<<<<<< HEAD
        cout << fixed << setprecision(4) << "Salario: " << salario << endl;
    }  
};
=======
        cout << fixed << setprecision(4) << "Salario: " << salario << endl;// Use fixed e setprecision para formatar a saída
    }
};

int main(){
    Pessoa pessoa;

    std::cout << "Digite o nome: " << std::endl;
    cin.getline(pessoa.nome, 50);
    std::cout << "Digite a idade: " << std::endl;
    cin >> pessoa.idade;
    cout << "Digite o salario: ";
    cin.ignore();
    cin >> pessoa.salario;

    pessoa.exibirDados();

    return 0;
}
>>>>>>> minha-primeira-ramificação
