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
    double valor1 = 0, valor2 = 0, valor3 = 0;
    double area = 0, volume = 0;
    CalcPiramide calculo_piramide(valor1,valor2);
    CalcCubo calculo_cubo(valor1);
    CalcParalelepipedo calculo_paralelepipedo(valor1,valor2,valor3);
    CalcEsfera calculo_esfera(valor1);

    cout << "Bem vindo a Calculadora Magica de Formas Geometricas!" << endl;
    cout << "Disclaimer: considere todas as medidas entregues como centimetros." << endl;

    do {
        valor1 = 0, valor2 = 0, valor3 = 0;
        menu();

        cin >> input;

        switch (input)
        {
        case 1:
            cout << "Digite o valor da base: ";
            cin >> valor1;
            cout << "Digite o valor da Altura: ";
            cin >> valor2;
            
            area = calculo_piramide.calcular_area(valor1, valor2);
            volume = calculo_piramide.calcular_volume(valor1, valor2);
            cout << "\nA area da piramide: " << area << "cm quadrados.\n" << "O volume da piramide: " << volume; 
            cout << "cm cubicos.\n" << endl;
            break;
        case 2:
            cout << "Digite o valor da Aresta: ";
            cin >> valor1;
            
            area = calculo_cubo.calcular_area(valor1);
            volume = calculo_cubo.calcular_volume(valor1);
            cout << "\nA area do Cubo: " << area << "cm quadrados.\n" << "O volume do Cubo: " << volume; 
            cout << "cm cubicos.\n" << endl;
            break;
        case 3:
            cout << "Digite o valor da Primeira Aresta: ";
            cin >> valor1;
            cout << "Digite o valor da Segunda Aresta: ";
            cin >> valor2;
            cout << "Digite o valor da Terceira Aresta: ";
            cin >> valor3;
            
            area = calculo_paralelepipedo.calcular_area(valor1,valor2,valor3);
            volume = calculo_paralelepipedo.calcular_volume(valor1,valor2,valor3);
            cout << "\nA area do Paralelepipedo: " << area << "cm quadrados.\n" << "O volume do Paralelepipedo: " << volume; 
            cout << "cm cubicos.\n" << endl;
            break;
        case 4:
            cout << "Digite o valor do Diametro: ";
            cin >> valor1;
            
            area = calculo_esfera.calcular_area(valor1);
            volume = calculo_esfera.calcular_volume(valor1);
            cout << "\nA area da Esfera: " << area << "cm quadrados.\n" << "O volume da Esfera: " << volume; 
            cout << "cm cubicos.\n" << endl;
            break;
        default:
            cout << "Opcao invalida, tente um dos numeros da tabela.\n";
            break;  
        }


    } while (input != 5);

    cout << "Obrigado por utilizar a Calculadora Magica de Formas Geometricas!";

    return 0;
}