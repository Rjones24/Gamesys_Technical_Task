#pragma once
#include <cstdio>  

#include <iostream>
#include <string>

#include "Buying.h"
#include "Adding_New_Book.h"
    

    struct Books {
        int id;
        string Name;
        int year;
        float price;
    }book[11];

    //c++ ascii for £
    char x = 156;

    Buying buy;
    Adding_New_Book add;
    Calculate cal;
    float total;