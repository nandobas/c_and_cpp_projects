#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;
    string nome;
    public:
    carro(string nome="", int ano=0, float valor=-1, float km=-1){
        this->nome = nome;
        this->ano = ano;
        this->valor = valor;
        this->km = km;
    }
    void setNome(string n){
        this->nome = n;
    }
    string getNome(){
        return this->nome;
    }
    void setAno(int a){
        this->ano = a;
    }
    int getAno(){
        return this->ano;
    }
    void setValor(float v){
        this->valor = v;
    }
    float getValor(){
        return this->valor;
    }
    void setKm(float k){
        this->valor = k;
    }
    float getKm(){
        return this->km;
    }
};



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