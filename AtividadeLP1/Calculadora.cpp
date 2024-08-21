#include <iostream>
#include <cmath> 

using namespace std;



class CalcPiramide{
    private:
        double base_piramide, altura_piramide;
    public:
        double calcular_area(double base,double altura){
            double base_apotema =  ((base/2)*(base/2));
            double altura_apotema = ((altura/2)*(altura/2));
            double quadrados = base_apotema + altura_apotema;
            double apotema = sqrt(quadrados);
            double area_face = (apotema*base)/2;
            double area_lateral = area_face*4;

            double area_base = base*base;

            double area_piramide = area_base + area_lateral;

            return area_piramide;
        };

        double calcular_volume(double base,  double altura){
            double area_base = base*base;
            double volume = (area_base*altura)/3;

            return volume;
        };
           
        CalcPiramide(double base_input, double altura_input){
            base_piramide = base_input;
            altura_piramide = altura_input;
        };
        ~CalcPiramide(){

        };
};

class CalcCubo{
    private:
        double aresta_base;
    public:
        double calcular_area(double aresta_base){
            
            double area_cubo = 6*(pow(aresta_base,2));
            return area_cubo;
        };

        double calcular_volume(double aresta_base){
            double volume_cubo = pow(aresta_base,3);

            return volume_cubo;
        };
           
        CalcCubo(double aresta){
            aresta_base = aresta;
        };
        ~CalcCubo(){

        };
};

class CalcParalelepipedo{
    private:
        double aresta1,aresta2,aresta3;
    public:
        double calcular_area(double aresta1,double aresta2,double aresta3){
            double area_aresta_1_2 = 2*(aresta1*aresta2);
            double area_aresta_1_3 = 2*(aresta1*aresta3);
            double area_aresta_2_3 = 2*(aresta2*aresta3);
            double area_paralelepipedo = area_aresta_1_2 + area_aresta_1_3 + area_aresta_2_3;
            
            return area_paralelepipedo;
        };

        double calcular_volume(double aresta1,double aresta2,double aresta3){
            double volume_paralelepipedo = aresta1*aresta2*aresta3;

            return volume_paralelepipedo;
        };
           
        CalcParalelepipedo(double aresta_1,double aresta_2, double aresta_3){
            aresta1 = aresta_1;
            aresta2 = aresta_2;
            aresta3 = aresta_3;
        };
        ~CalcParalelepipedo(){

        };
};

class CalcEsfera{
    private:
        double pi = 3.14;
        double diametro;

    public:
        double calcular_area(double diametro){
            double raio = diametro/2;
            double area_esfera = 4*(pi*(pow(raio,2)));
            
            return area_esfera;
        };

        double calcular_volume(double diametro){
            double raio = diametro/2;
            double volume_esfera = 4*(pi*(pow(raio,4)))/3;

            return volume_esfera;
        };
           
        CalcEsfera(double diametro_input){
            diametro = diametro_input;
        };
        ~CalcEsfera(){

        };
};