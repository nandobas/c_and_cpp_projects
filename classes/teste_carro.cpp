#include <iostream>
#include "bicicleta.cpp"

using namespace std;

int main(){
    carro ka("Ford Ka", 2015, 12000, 89000);
    cout << ka.getNome() << endl;
    cout << "ano: " << ka.getAno() << endl;
    cout << "valor: " << ka.getValor() << endl;
    cout << "kilometragem: " << ka.getKm() << endl;

    cout << "\n\n" << endl;

    carro celta("Gm Celta", 2017, 15000, 75600);
    cout << celta.getNome() << endl;
    cout << "ano: " << celta.getAno() << endl;
    cout << "valor: " << celta.getValor() << endl;
    cout << "kilometragem: " << celta.getKm() << endl;
    return 0;
}