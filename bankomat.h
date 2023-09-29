#include <stdio.h>
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Bankomat
{
    string id;
    double total;
    double min;
    double max;
public:
    void Init(string ch, double s, double minS, double maxS);
    void Input();
    void takeMoney();
    void Print();
    double GetTotal();
};