#include <string>
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