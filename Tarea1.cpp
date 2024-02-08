#include <iostream>
#include <stdlib.h>
using namespace std;

class Maquillaje{
public: 
    string nombre;
    Maquillaje(string);
    void mostrarMaquillaje();
};

class Precio : public Maquillaje{
public:
    float precio;
    Precio(string, float);
    void mostrarPrecio();
};

class Codigo : public Precio{
public:
    string codigoproducto;
    Codigo(string, float, string);
    void mostrarCodigo();
};

Maquillaje::Maquillaje(string _nombre){
    nombre = _nombre;
}

Precio::Precio(string _nombre,float _precio):Maquillaje(_nombre){
    precio = _precio;
}

Codigo::Codigo(string _nombre, float _precio, string _codigoproducto):Precio(_nombre, _precio){
    codigoproducto = _codigoproducto;
}

void Maquillaje::mostrarMaquillaje(){
    cout<<"Nombre: "<< nombre << endl;
}

void Precio::mostrarPrecio(){
    mostrarMaquillaje();
    cout<<"Precio: "<< precio << endl;
}

void Codigo::mostrarCodigo(){
    mostrarPrecio();
    cout<<"Codigo: "<< codigoproducto << endl;
}

int main(){
    Codigo maquillaje1("Labial",200,"123123123");
    maquillaje1.mostrarCodigo();

    return 0;
}