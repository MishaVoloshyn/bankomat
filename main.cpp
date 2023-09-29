#include <iostream>
#include "bankomat.h"
#include <string.h>
using namespace std;
int main() {
    Bankomat a;
    a.Init("k40:1KV:56", 5000, 50, 100000);
    a.Print();
    a.Input();
    a.Print();
    a.takeMoney();
    a.Print();
    double current = a.GetTotal();
    string s = to_string(current);
    cout << s << endl;
    return 0;
}