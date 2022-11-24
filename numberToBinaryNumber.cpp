//
//  main.cpp
//  From numer to binary number
//
//  Created by Dawid Maciejewski on 24/11/2022.
//

#include <iostream>

using namespace std;

void binary(long);

void binary(long decimal){
    if (decimal>=0)
        cout << "0";
    else
        cout << "1";
    for (long i = 1 << 30; i > 0; i = i / 2)
    {
        if((decimal & i) != 0)
            cout << "1";
        else
            cout << "0";
    }
}

void binRecursive(unsigned long);

void binRecursive(unsigned long decimal)
{
    if (decimal > 1)
        binRecursive(decimal / 2);
 
    cout << decimal % 2;
}


int main(int argc, const char * argv[]) {
    long decimal;
    cout << "Enter number:";
    cin >> decimal;
    cout << "Deciaml:" << decimal << endl;
    cout << "Binday:";
    binary(decimal);
    cout << endl;
    cout << "BinaryRecurisve:";
    binRecursive(decimal);

    return 0;
}
