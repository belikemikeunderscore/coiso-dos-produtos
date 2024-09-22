#include <iostream>

using namespace std;

int quantidadedeprodutos = 0;

struct Produto {
    string nome; 
    float preco;
    int quantidade;
};

Produto itens[] = {};

void adicionarProduto(Produto produtos[], int& quantidadeAtual){
            cout << "Nome: ";
                string nomeprod;
                    cin >> nomeprod;
            cout << "\nPreço: ";
                float precoprod;
                    cin >> precoprod;
            cout << "\nQuantidade: ";
                int quantidadeprod;
                    cin >> quantidadeprod;

    itens[quantidadeAtual].nome = nomeprod;
    itens[quantidadeAtual].preco = precoprod;
    itens[quantidadeAtual].quantidade = quantidadeprod;

//debug
    cout << quantidadeAtual << endl;
    cout << itens[quantidadeAtual].nome << endl;
    cout << itens[quantidadeAtual].preco << endl;
    cout << itens[quantidadeAtual].quantidade << endl;

//debug

    quantidadedeprodutos = quantidadeAtual + 1;
    if(quantidadeAtual < 2){
        cout << quantidadeAtual << " Item registrado\n";}
    else{
        cout << quantidadeAtual << " Itens registrados\n\n";
}

}

void exibirProdutos(const Produto produtos[], int quantidadeAtual){

}

float calcularValorTotal(const Produto produtos[], int quantidadeAtual){

}



int main(){

    while(true){
        int escolha;
        cout << "Escolha\n\n" << "[1] Adicionar produtos \n[2] Exibir produtos \n[3] Calcular e exibir stock \n[0] Sair\n";
            cin >> escolha;
            int quantidadeinicial = 0;
    switch(escolha){
            case 1: 
            
                adicionarProduto(itens, quantidadedeprodutos);
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
