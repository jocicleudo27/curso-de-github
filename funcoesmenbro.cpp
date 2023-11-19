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