
#include <iostream>
#include <cstring>

using namespace std;

class Produto{
public:
    string nome;
    double preco;

    Produto(string nome, double preco): nome(nome), preco(preco){}

    ///Métodos
    void setNome(string novoNome){
        nome = novoNome;
    }

    string getNome(){
        return nome;
    }

    void setPreco(double novoPreco){
        preco = novoPreco;
    }

    double getPreco(){
        return preco;
    }

};
int main(){
    Produto celular("Celular" , 1000.0);
    cout << "Nome do produto: " << celular.getNome() << endl;
    cout << "Preco do produto: " << celular.getPreco() << endl;

    return 0;
}