#include <iostream>

using namespace std;

int main() {
    char operacion;
    double n1, n2;

    cout << "Calculadora Sencilla" << endl;
    
    cout << "Elige una operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Introduce el primer numero: ";
    cin >> n1;
    cout << "Introduce el segundo numero: ";
    cin >> n2;

    switch(operacion) {
        case '+':
            cout << "Resultado: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Resultado: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Resultado: " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << "Resultado: " << n1 / n2 << endl;
            } else {
                cout << "No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
            break;
    }

    return 0;
}