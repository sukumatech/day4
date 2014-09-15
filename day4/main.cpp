//
//  main.cpp
//  day4
//
//  Created by susan on 03/07/14.
//  Copyright (c) 2014 umojaTech. All rights reserved.
//

#include <iostream>
using namespace std;

int swap(int &rx, int &ry);
int main(void)
{

    int x =9;
    int y = 10;
    
    cout << "main before swap: " << x <<"......" << y <<endl;
    
    swap(x, y);
    
     cout << "main after swap: " << x <<"......" << y << endl;
    
    

    return 0;
}

int swap(int &rx, int &ry)
{
    
    int temp;
    cout << "before swap " << rx <<"......" << ry <<endl;
    
    temp = rx;
    rx = ry;
    ry = temp;
    
    cout << "after swap " << rx <<"......" << ry << endl;
    
    return 0;
    
}