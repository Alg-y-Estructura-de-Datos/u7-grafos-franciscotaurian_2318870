#include <iostream>
#include <chrono>
#include <thread> // Para usar std::this_thread::sleep_for
#include "Arbol/ArbolBinarioAVL.h"

using namespace std;

int main() {

    cout << "Ejercicio N° 1" << endl;

    ArbolBinarioAVL<int> a1;
    int num = 0;

    while (true)
    {
        cout<<"Paso "<<num<<endl;
        cout<<" "<<endl;
        a1.put(num);
        a1.print();
        cout<<"Balance: "<<a1.getBalance()<<endl;
        num++;
        this_thread::sleep_for(chrono::seconds(1)); // Demora de 1 segundo
    }

    return 0;
}