#include <iostream>
using namespace std;

int main() {
	
    int p1, p2_necessaria;
    
    cout << "Digite a nota da P1: ";
    cin >> p1;
    p2_necessaria = (15 - p1) / 2;
    cout << "O aluno precisa tirar no minimo " << p2_necessaria << " na P2." << endl;
    
    return 0;
}