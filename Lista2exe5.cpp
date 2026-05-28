#include <iostream>
using namespace std;

int main() {
	
    int base, altura, area;
    cout << "Digite a base e a altura: ";
    cin >> base >> altura;
    area = base * altura;
    cout << "Area: " << area << endl;
    if (area > 100) cout << "Terreno grande" << endl;
    
	else cout << "Terreno pequeno" << endl;
	
	
    return 0;
}