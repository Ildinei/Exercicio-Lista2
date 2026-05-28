#include <iostream>
using namespace std;

int main() {
	
    int a, b, c;
    
    cout << "Digite os tres lados: ";
    cin >> a >> b >> c;
    
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) cout << "Triangulo Equilatero" << endl;
        else if (a == b || b == c || a == c) cout << "Triangulo Isosceles" << endl;
        else cout << "Triangulo Escaleno" << endl;
    } else {
        cout << "Nao formam um triangulo." << endl;
        
    }
    return 0;
}