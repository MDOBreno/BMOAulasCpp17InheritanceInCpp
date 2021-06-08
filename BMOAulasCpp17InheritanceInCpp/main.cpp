//
//  main.cpp
//  BMOAulasCpp17InheritanceInCpp
//
//  Created by Breno Medeiros on 08/06/21.
//

#include <iostream>

class Entidade {
public:
    float X, Y; //Pesa 4 Bytes cada um desses floats
    
    void Mover(float xa, float ya) {
        X += xa;
        Y += ya;
    }
};

class Jogador:public Entidade {
public:
    const char* Nome; //Pesa 4 Bytes em processadores/programas 32bits, e 8 Bytes em processadores/programas 64bits
    
    void PrintNome() {
        std::cout << Nome << std::endl;
    }
};


class JogadorSemHerancaDeEntidade {
public:
    const char* Nome;
    
    void PrintNome() {
        std::cout << Nome << std::endl;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << sizeof(Entidade) << std::endl; //Exibira 8(Bytes), pois temos dois floats(X e Y), pesando 4 cada
    std::cout << sizeof(Jogador) << std::endl; //Exibira 12(Bytes), pois tem um char*(Nome, pesando 8) + 8 de Entidade
    std::cout << sizeof(JogadorSemHerancaDeEntidade) << std::endl;//Exibira 8(Bytes), por somente ter um char*(Nome)
    
    Jogador jogador;
    //jogador.PrintNome(); //Descomentar essa linha causara erro, devido a tentar exibir uma variavel n instanciada
    jogador.Mover(5, 5);
    jogador.X = 2;
    
    std::cout << "Hello, World!\n";
    return 0;
}
