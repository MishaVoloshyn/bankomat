#pragma once
#include "bankomat.h"
#include <iostream>
#include <string.h>
using namespace std;

void Bankomat::Init(string ch, double s, double minS, double maxS)
{
    id = ch;
    total = s;
    min = minS;
    max = maxS;
}
void Bankomat::Print()
{
    cout << "ID bankomat: " << id << endl;
    cout << "Total sum is: " << total << endl;
    cout << "Min sum for taking:  " << min << endl;
    cout << "Max sum fo taking: " << max << endl;
}
double Bankomat::GetTotal()
{
    return total;
}
void Bankomat::Input()
{
    double add;
    cout << "Input your sum to add:";
    cin >> add;
    total = total + add;
}
void Bankomat::takeMoney()
{
    int take;
    cout << "vasha cifra dolshna bit 10!" << endl;
    do {
        cout << "Input your sum:";
        cin >> take;
        if ((take < min) || (take > max) || (take > total) || (take % 10 != 0))
        {
            cout << "Error Again!" << endl;
        }
    }
    while ((take < min) || (take > max) || (take > total) || (take % 10 != 0));




    int Q[] = { 1000, 500, 200, 100, 50, 20, 10 };
    int x = 0;
    total = total - take;
    for (int i = 0; i < 7; i++)
    {
        x = take / Q[i];
        take %= Q[i];
        if (x > 0)
        {
            cout << "vidano " << x << " bumag po: " << Q[i] << endl;
            x = 0;
        }
    }
   

  
}