#include <iostream>

using namespace std;
int obtener_edad(int anioactual, int aniodenacimiento){
    int valor = anioactual - aniodenacimiento;
    return valor;
}

int main(){
    string nombre;
    string apellido;
    int aniodenacimiento;
    int edad;
    cout<<"ingresesu nombre"<<endl;
    cin>> nombre;
    cout<<"ingrese su apellido"<<endl;
    cin>>apellido;
    cout<<"ingrese año de naciemiento"<<endl;
    cin>>aniodenacimiento;
    edad = obtener_edad(2018, aniodenacimiento);
    cout<<"su nombre "<<nombre<<endl;
    cout<<"su apellido "<<apellido<<endl;
    cout<<"su año de nacimiento "<<aniodenacimiento<<endl;


return 0;
}
