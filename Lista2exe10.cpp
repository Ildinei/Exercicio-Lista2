#include <iostream>
using namespace std;

int main() {
	
    int p1, p2, media;
    
    cout << "Digite a nota P1 e P2: ";
    cin >> p1 >> p2;
    media = (p1 + 2 * p2) / 3;
    cout << "Media final: " << media << endl;
    
    if (media >= 5) cout << "Aprovado" << endl;
    else cout << "Reprovado" << endl;
    
    return 0;
}