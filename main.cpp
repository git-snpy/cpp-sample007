/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: inoue
 *
 * Created on 2017/11/25, 11:40
 */

#include <iostream>

using namespace std;

struct A {
    int x;
    void showX() {
        cout << "x = " << x << endl;
    }
    static int s;
    static void showS() {
        cout << "s = " << s << endl;
    }
};

int A::s = 5;

int main(int argc, char** argv) {
    A::showS();
    A a1, a2;
    a1.x = 1;
    a2.x = 2;
    a1.s = 10;
    a1.showS();
    a1.showX();
    a2.showS();
    a2.showX();
    
    return 0;
}

