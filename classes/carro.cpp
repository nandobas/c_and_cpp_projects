#include <iostream>
#include "carro.h"

using namespace std;

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