#include<iostream>

using namespace std;

int main(){

    cout << "Hello world" << endl;
   
    int a = 5 , b = 10;

    // Operateurs logiques
    cout << "a = "<<a<<" b = "<<b<<endl;
    cout << "opérateurs logique" <<endl;

    bool ET = (a > 0) && (b < 10);
    bool OU = (a == 5) || (b == 3);
    bool negation = !(a == 0);

    cout << " (a > 0) && (b < 10) = " << ET <<endl;
    cout << "(a == 5) || (b == 3) = " << OU <<endl;
    cout << "!(a == 0) = " << negation << endl;

    // Operateurs bit a bit
    cout << "opérateurs bit a bit" <<endl;

    int x = 5; // 0101 en binaire
    int y = 3; // 0011 en binaire
    
    int etBit = x & y; // 0001 = 1
    int ouBit = x | y; // 0111 = 7
    int xorBit = x ^ y; // 0110 = 6
    int nonBit = ~x; // inverse tous les bits

    cout <<"x&y = "<<etBit<<endl;
    cout<< "x | y = "<<ouBit<<endl;
    cout<<"x^y = "<<xorBit<<endl;
    cout<<"~x = "<<nonBit<<endl;

    return 0;

}