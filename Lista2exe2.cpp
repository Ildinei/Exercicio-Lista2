#include <iostream>
using namespace std;

int main() {
	
    int v1, v2;
    cout << "Digite dois valores: ";
    cin >> v1 >> v2;
    if (v1 == v2) cout << "Os numeros sao identicos." << endl;
    else if (v1 > v2) cout << "O maior e: " << v1 << endl;
    else cout << "O maior e: " << v2 << endl;
    
    return 0;
}