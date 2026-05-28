#include <iostream>
using namespace std;

int main() {
	
    int peso, altura, r;
    char sexo;
    
    cout << "Digite peso, altura e sexo (F/M): ";
    cin >> peso >> altura >> sexo;
    r = peso / (altura * altura);
    
    if (toupper(sexo) == 'F') {
        if (r < 19) cout << "Abaixo do peso" << endl;
        else if (r < 24) cout << "Peso ideal" << endl;
        else cout << "Acima do peso" << endl;
    } else if (toupper(sexo) == 'M') {
        if (r < 20) cout << "Abaixo do peso" << endl;
        else if (r < 25) cout << "Peso ideal" << endl;
        else cout << "Acima do peso" << endl;
    } else {
        cout << "Sexo invalido." << endl;
        
    }
    return 0;
}