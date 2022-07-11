#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;
    string nome;

    public:
    carro(string nome, int ano, float valor, float km);
    void setNome(string n);
    string getNome();
    void setAno(int a);
    int getAno();
    void setValor(float v);
    float getValor();
    void setKm(float k);
    float getKm();
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


carro::carro(string nome="", int ano=0, float valor=-1, float km=-1){
    this->nome = nome;
    this->ano = ano;
    this->valor = valor;
    this->km = km;
}
void carro::setNome(string n){
    this->nome = n;
}
string carro::getNome(){
    return this->nome;
}
void carro::setAno(int a){
    this->ano = a;
}
int carro::getAno(){
    return this->ano;
}
void carro::setValor(float v){
    this->valor = v;
}
float carro::getValor(){
    return this->valor;
}
void carro::setKm(float k){
    this->valor = k;
}
float carro::getKm(){
    return this->km;
}