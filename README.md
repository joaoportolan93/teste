# Documentação do Código

## Descrição Geral
Este código é um programa simples de caixa eletrônico que permite ao usuário sacar dinheiro. O programa calcula a quantidade de notas de diferentes valores (50, 20, 10, 5 e 2) necessárias para atingir o valor solicitado pelo usuário.

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
array<int,5> contaNotas(int saque) {
    array<int,5> notasSeparadas;
    notasSeparadas[0] = (saque/50);
    notasSeparadas[1] = ((saque%50)/20);
    notasSeparadas[2] = (((saque%50)%20)/10);
    notasSeparadas[3] = ((((saque%50)%20)%10)/5);
    notasSeparadas[4] = (((((saque%50)%20)%10)%5)/2);
    return notasSeparadas; 
}
```
Esta função recebe um valor de saque como entrada e retorna um array de inteiros que representa a quantidade de notas de cada valor (50, 20, 10, 5 e 2) necessárias para atingir o valor de saque.

### Função `main()`
```cpp
int main() { 
    int saque;
    array<int,5> qtdNotas;
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;
    qtdNotas; contaNotas(saque);
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
    if (saque < 0){
        cout << "Erro: Valor de saque negativo não é válido.\n";
    }
    return 0;
}
```
A função `main()` é o ponto de entrada do programa. Ela solicita ao usuário que insira um valor de saque, chama a função `contaNotas(saque)` para calcular a quantidade de notas necessárias e, em seguida, imprime a quantidade de cada nota. Se o valor de saque for negativo, uma mensagem de erro é exibida.

## Como Usar
Para usar este programa, o usuário deve inserir um valor de saque quando solicitado. O programa então calculará e exibirá a quantidade de notas de cada valor necessárias para atingir o valor de saque. Se o valor de saque for negativo, uma mensagem de erro será exibida. 

## Limitações
Este programa não verifica se o valor de saque é um número inteiro ou se é um valor que pode ser sacado com as notas disponíveis (por exemplo, não é possível sacar um valor de 1 ou 3 com as notas disponíveis). Além disso, o programa não verifica se o valor de saque é maior do que o saldo disponível em uma conta bancária real. 

## Conclusão
Este programa é uma implementação simples de um caixa eletrônico que pode ser usada como base para um programa mais complexo. Ele demonstra o uso de funções, arrays e operações de entrada/saída em C++.
