#include <iostream>
using namespace std;

int main() {
	
    int v1, v2, v3, maior;
    cout << "Digite tres valores: ";
    cin >> v1 >> v2 >> v3;
    maior = v1;
    
    if (v2 > maior) maior = v2;
    if (v3 > maior) maior = v3;
    cout << "O maior valor e: " << maior << endl;

    return 0;
}