## Guide for user profiles ○( ＾皿＾)っ Hehehe…
------
## Descrição Geral 
Olá pessoal! Tudo tranquilo? Bom, este código é um programa simples de caixa eletrônico que permite ao usuário sacar dinheiro. O programa calcula a quantidade de notas de diferentes valores (100, 50, 20, 10, 5 e 2) necessárias para atingir o valor solicitado pelo usuário.

## Detalhes do Código

### Bibliotecas Utilizadas
```cpp
#include <iostream>
#include <cmath>
#include <array>
using namespace std;
```
As bibliotecas `iostream`, `cmath` e `array` são incluídas. `iostream` é usada para operações de entrada/saída, `cmath` para operações matemáticas e `array` para usar a estrutura de dados do array.

### Função `contaNotas(int saque)`
```cpp
array<int,6> contaNotas(int saque){
    array<int,6> notasSeparadas;
    array<int,6> notas = {100, 50, 20, 10, 5, 2};
    for(int i = 0; i < 6; i++){
        notasSeparadas[i] = saque / notas[i];
        saque %= notas[i];
    }
    return notasSeparadas;
 double valor = solicitarValor();
    if(valor != -1){
        char moedaSelecionada = escolhaMoeda();
        double valorConvertido = converterMoeda(valor, moedaSelecionada);
        if (valorConvertido != -1) {
            cout << "O valor convertido é: " << valorConvertido << "\n";
        }
    }
}
```
Esta função recebe um valor de saque como entrada e retorna um array de inteiros que representa a quantidade de notas de cada valor (100, 50, 20, 10, 5 e 2) necessárias para atingir o valor de saque. 

---
### Guide for Devs ᓚᘏᗢ💻    
---
### Função `main()`
```cpp
#include <iostream>
#include <cmath>
#include <array>
using namespace std;

array<int,6> contaNotas(int saque){
    array<int,6> notasSeparadas;
    array<int,6> notas = {100, 50, 20, 10, 5, 2};
    for(int i = 0; i < 6; i++){
        notasSeparadas[i] = saque / notas[i];
        saque %= notas[i];
    }
    return notasSeparadas; 
}
char escolhaMoeda(){
    char moeda;
    cout << "Digite a letra correspondente à moeda desejada (r = real, e = Euro, u = Dólar americano, i = Iene japonês): ";
    cin >> moeda; 
    return moeda; 
}
double converterMoeda(double valor, char moeda){
    const double taxaEuro = 5.64;
    const double taxaDolar = 5.20;
    const double taxaIene = 0.033;
    switch (moeda){
        case 'e' : 
            return valor * taxaEuro;
        case 'u':
            return valor * taxaDolar;
        case 'i': 
            return valor * taxaIene; 
        case 'r': 
            return valor;
        default:
            cout << "Moeda inválida. Escolha entre e, u, i ou r." << endl;
            return -1;
    }
    return 0;
}
int solicitarValor(){
    int valor;
    cout << "Digite o valor: ";
    cin >> valor;
    if(valor < 0){
        cout << "Erro: Valor negativo não é válido.\n";
        return -1;
    }
    return valor;
}
int main(){ 
    char moeda = escolhaMoeda();
    int saque = solicitarValor();
    if(saque != -1){
        array<int,6> qtdNotas = contaNotas(saque);
        cout << "------------------------" << endl;
        cout << "Qtd. Notas de 100: " << qtdNotas[0] << "\n";
        cout << "Qtd. Notas de 50: " << qtdNotas[1] << "\n";
        cout << "Qtd. Notas de 20: " << qtdNotas[2] << "\n";
        cout << "Qtd. Notas de 10: " << qtdNotas[3] << "\n";
        cout << "Qtd. Notas de 5: " << qtdNotas[4] << "\n";
        cout << "Qtd. Notas de 2: " << qtdNotas[5] << "\n";
    }
    double valor = solicitarValor();
    if(valor != -1){
        char moedaSelecionada = escolhaMoeda();
        double valorConvertido = converterMoeda(valor, moedaSelecionada);
        if (valorConvertido != -1) {
            cout << "O valor convertido é: " << valorConvertido << "\n";
        }
    }
    return 0;
}
```
A função `main()` é o ponto de entrada do programa. Ela solicita ao usuário que insira um valor de saque, chama a função `contaNotas(saque)` para calcular a quantidade de notas necessárias e, em seguida, imprime a quantidade de cada nota. Se o valor de saque for negativo, uma mensagem de erro é exibida.

## Como Usar
Para usar este programa, o usuário deve inserir um valor de saque quando solicitado. O programa então calculará e exibirá a quantidade de notas de cada valor necessárias para atingir o valor de saque. Logo depois, o usuario podera  

## Limitações
Este programa não verifica se o valor de saque é um número inteiro ou se é um valor que pode ser sacado com as notas disponíveis (por exemplo, não é possível sacar um valor de 1 ou 3 com as notas disponíveis). Além disso, o programa não verifica se o valor de saque é maior do que o saldo disponível em uma conta bancária real. 

## Conclusão
Este programa é uma implementação simples de um caixa eletrônico que pode ser usada como base para um programa mais complexo. Ele demonstra o uso de funções, arrays e operações de entrada/saída em C++.
