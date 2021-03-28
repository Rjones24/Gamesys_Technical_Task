#pragma once
#include <cstdio>  

#include <iostream>
#include <string>

#include "Buying.h"
    

    struct Books {
        int id;
        string Name;
        int year;
        float price;
    }book[11];

    //c++ ascii for £
    char x = 156;

    Buying buy;
    Calculate cal;
    float total;