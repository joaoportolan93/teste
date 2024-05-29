#include <iostream>
#include <cmath>
#include <array>
using namespace std;

array<int,5> contaNotas(int saque) {
    array<int,5> notasSeparadas;
    notasSeparadas[0] = (saque/50);
    notasSeparadas[1] = ((saque%50)/20);
    notasSeparadas[2] = (((saque%50)%20)/10);
    notasSeparadas[3] = ((((saque%50)%20)%10)/5);
    notasSeparadas[4] = (((((saque%50)%20)%10)%5)/2);
    return notasSeparadas;
}
// "inicio" do código
int main() { 
    int saque;
    array<int,5> qtdNotas;
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;
    qtdNotas; contaNotas(saque);
    //pq isso deu certo?  
    cout << "Qtd. Notas de 50: "; 
    cout << qtdNotas[0];
    cout << "\n";
    cout << "Qtd. Notas de 20: ";
    cout << qtdNotas[1];
    cout << "\n";
    cout << "Qtd. Notas de 10: ";
    cout << qtdNotas[2];
    cout << "\n";
    cout << "Qtd. Notas de 5: "; 
    cout << qtdNotas[3];
    cout << "\n";
    cout << "Qtd. Notas de 2: ";
    cout << qtdNotas [4];
    cout << "\n"; 
    return 0;
}
