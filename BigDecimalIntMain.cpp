#include <iostream>
#include <conio.h>
#include <string>
#include "BigDecimalInt.cpp"

using namespace std;

int main(){
    BigDecimalInt b1 = BigDecimalInt("2222222222222222");
    BigDecimalInt b2 = BigDecimalInt("40000000000000000000");



    // from f to k 
    b1 > b2 ? cout << "true\n" : cout << "false\n"; 
    b1 == b2 ? cout << "true\n" : cout << "false\n";
    b1 = b2;
    cout << "number:" << b1.get_num() << endl;
    cout << "Size:  " << b1.size() << endl;
    cout << "Sign:  " << b1.sign() << endl;
    cout << "b1:    " << b1 << endl;

    return getch();
}