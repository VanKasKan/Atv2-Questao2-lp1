#include <iostream>
#include <iomanip>
#include "Calculadora.cpp"

using namespace std;

string menu(){
    cout << "Escolha uma das funcoes abaixo: " << endl;
    cout << "1 - Calculador de area e volume de Piramide" << endl;
    cout << "2 - Calculador de area e volume de Cubo" << endl;
    cout << "3 - Calculador de area e volume de Paralelepipedo" << endl;
    cout << "4 - Calculador de area e volume de Esfera" << endl;
    cout << "5 - Sair\n" << endl;
    
    return "";
}

int main(){ 
    char input;
    double valor1, valor2, valor3;

    cout << "Bem vindo a Calculadora Magica de Formas Geometricas!" << endl;
    cout << "Disclaimer: considere todas as medidas entregues como centimetros." << endl;

    do {
        menu();

        cin >> input;

        switch (input)
        {
        case '1':
            cout << "Digite o valor da base: ";
            cin >> valor1;
            cout << "Digite o valor da Altura: ";
            cin >> valor2;
            
            {
            CalcPiramide cpira = CalcPiramide(valor1, valor2); 

            cout << "\nA area da piramide: " << calcular_area(&cpira) << "cm quadrados.\n" << "O volume da piramide: " << calcular_volume(&cpira); 
            cout << "cm cubicos.\n" << endl;
            }
            break;
        case '2':
            cout << "Digite o valor da Aresta: ";
            cin >> valor1;
            
            { 
            CalcCubo cc = CalcCubo(valor1); 

            cout << "\nA area do Cubo: " << calcular_area(&cc) << "cm quadrados.\n" << "O volume do Cubo: " << calcular_volume(&cc); 
            cout << "cm cubicos.\n" << endl; 
            }
            break;
        case '3':
            cout << "Digite o valor da Primeira Aresta: ";
            cin >> valor1;
            cout << "Digite o valor da Segunda Aresta: ";
            cin >> valor2;
            cout << "Digite o valor da Terceira Aresta: ";
            cin >> valor3;
            
            {
            CalcParalelepipedo cpara = CalcParalelepipedo(valor1, valor2, valor3); 
            cout << "\nA area do Paralelepipedo: " << calcular_area(&cpara) << "cm quadrados.\n" << "O volume do Paralelepipedo: " << calcular_volume(&cpara); 
            cout << "cm cubicos.\n" << endl;
            }
            break;
        case '4':
            cout << "Digite o valor do Diametro: ";
            cin >> valor1;
            
            
            {
            CalcEsfera ce = CalcEsfera(valor1); 
            cout << "\nA area da Esfera: " << calcular_area(&ce) << "cm quadrados.\n" << "O volume da Esfera: " << calcular_volume(&ce); 
            cout << "cm cubicos.\n" << endl;
            }
            break;
        default:
            cout << "Opcao invalida, tente um dos numeros da tabela.\n";
            break;  
        }


    } while (input != '5');

    cout << "Obrigado por utilizar a Calculadora Magica de Formas Geometricas!";

    return 0;
}