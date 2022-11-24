//
//  main.cpp
//  Calculator
//
//  Created by Dawid Maciejewski on 24/11/2022.
//

#include <iostream>
using namespace std;

void cal(char);
void calMenu();


int main(int argc, const char * argv[]) {
    
    char choose;
    cout << "Calculator" << endl;
    cout << "----------" << endl;
    do
    {
        calMenu();
        cin >> choose;
        if(choose=='E' || choose=='e')
            break;
        else
            cal(choose);
    }
    while(true);
    return 0;
}

void cal(char choose){
    double x,y;
    
    switch(choose)
    {
        case '+':
            cout << "Enter two operands one by one:";
            cin >> x >> y;
            cout << x << "+" << y << "=" << x+y << endl;
            break;
        case '-':
            cout << "Enter two operands one by one:";
            cin >> x >> y;
            cout << x << "-" << y << "=" << x-y << endl;
            break;
        case '*':
            cout << "Enter two operands one by one:";
            cin >> x >> y;
            cout << x << "*" << y << "=" << x*y << endl;
            break;
        case '/':
            cout << "Enter two operands one by one:";
            cin >> x >> y;
            if (y!=0)
                cout << x << "/" << y << "=" << x/y << endl;
            else
                cout << "Mistake, you cannot divide by 0" << endl;
            break;
        default:
            break;
    }

}

void calMenu(){
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cout << "Choose(to end enter E):";
    
}
