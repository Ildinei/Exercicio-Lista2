#include <iostream>
using namespace std;

int main() {
	
    int a, b, c, hip, cat1, cat2;
    
    cout << "Digite os tres valores: ";
    cin >> a >> b >> c;
    
    if (a > b && a > c) { hip = a; cat1 = b; cat2 = c; }
    else if (b > a && b > c) { hip = b; cat1 = a; cat2 = c; }
    else { hip = c; cat1 = a; cat2 = b; }
    
    if (hip * hip == (cat1 * cat1) + (cat2 * cat2))
        cout << "Formam um triangulo retangulo." << endl;
    else
        cout << "Nao formam um triangulo retangulo." << endl;
    return 0;
}