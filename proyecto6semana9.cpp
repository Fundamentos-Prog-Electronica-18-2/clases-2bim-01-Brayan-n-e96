#include <iostream>

using namespace std;
void obtenerTablaMultiplicar(int valorTabla, int limite){
    int contador = 1;
while(contador <=limite ){
        int operacion = valorTabla * contador;

    cout << valorTabla << " * " << contador << " = "<< operacion<<endl;
    contador = contador + 1;

}
}


void obtenerTablaSumar(int tabla, int limite){
    for (int valorTabla=0; valorTabla<=limite; valorTabla++){
            int operacion = tabla + valorTabla;
            cout << tabla << " + " << valorTabla << " = "<< operacion<<endl;
    }
}
int main()
{
    int valorTabla;
    int limite;
    int opcion;

    cout << "Ingrese el valor de la tabla :" << endl;
    cin >> valorTabla;

    cout << "Ingrese el limite :" << endl;
    cin >> limite;

    cout << "Ingrese opcion (1) multiplicacion | (2) suma :" << endl;
    cin >> opcion;

    if(opcion==1){
        obtenerTablaMultiplicar(valorTabla, limite);
    }else{
        if(opcion==2){
            obtenerTablaSumar(valorTabla, limite);
        }else{
            cout << "Opción incorrecta";
        }
    }

    return 0;
}
