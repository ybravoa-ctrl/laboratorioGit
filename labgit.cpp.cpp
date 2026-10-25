#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("input/entrada.txt");
    string linea;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo" << endl;
    }

    ofstream salida("output/salida.txt");
    salida << "Archivo generado por el tercer integrante" << endl;
    salida.close();

    return 0;
}