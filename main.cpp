#include <iostream>

using namespace std;

struct Produto {
    string nome; 
    float preco;
    int quantidade;
};

Produto itens[] = {};

void adicionarProduto(Produto produtos[], int& quantidadeAtual){

    string nomeprod;
    float precoprod;
    int quantidadeprod;
            cout << "Nome: ";
            cin >> nomeprod;
            cout << "\nPreço: ";
            cin >> precoprod;
            cout << "\nQuantidade: ";
            cin >> quantidadeprod;

    cout << quantidadeAtual;

}

void exibirProdutos(const Produto produtos[], int quantidadeAtual){

}

float calcularValorTotal(const Produto produtos[], int quantidadeAtual){

}



int main(){

    while(true){
    int escolha;
    cout << "Escolha\n" << endl
    << "[1] Adicionar produtos \n[2] Exibir produtos \n[3] Calcular e exibir stock \n[0] Sair\n";
    cin >> escolha;
    int quantidadeinicial = 0;
    switch(escolha){
        case 1: 
            
            adicionarProduto(itens, quantidadeinicial);
            break;
            
        case 2:
            int prodescolha;
            cout << "Introduzir o numero do produto" << endl;
            cin >> prodescolha;
            //exibirProdutos();

        case 3:
            //calcularValorTotal();






        case 0:
            cout << "A sair.." << endl;
            return 0;
    }
}


  return 0;
}
