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

    return 0;
}