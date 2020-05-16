#include <cmath>
#include <iostream>
#include <stdlib.h>
using namespace std;
void inpsh(
        char s[],
        int& x,
        int& x1,
        int& x2,
        int& x3,
        int& y,
        int& y1,
        int& y2,
        int& y3,
        float& r)
{
    string cr, cx, cy, cxt, cxt2, cxt3, cyt, cyt2, cyt3, shape;
    int i = 0;
    while (s[i] != '(') {
        shape += s[i];
        i++;
    }
    if (shape == "circle") {
        i = 7;
        while (s[i] != ' ') {
            cx += s[i];
            i++;
        }
        i++;
        while (s[i] != ',') {
            cy += s[i];
            i++;
        }
        i += 2;
        while (s[i] != ')') {
            cr += s[i];
            i++;
        }
        x = atoi(cx.c_str());
        y = atoi(cy.c_str());
        r = stof(cr);
    } else if (shape == "triangle") {
        i = 10;
        while (s[i] != ' ') {
            cxt += s[i];
            i++;
        }
        i++;
        while (s[i] != ',') {
            cyt += s[i];
            i++;
        }
        i += 2;
        while (s[i] != ' ') {
            cxt2 += s[i];
            i++;
        }
        i++;
        while (s[i] != ',') {
            cyt2 += s[i];
            i++;
        }
        i += 2;
        while (s[i] != ' ') {
            cxt3 += s[i];
            i++;
        }
        i++;
        while (s[i] != ')') {
            cyt3 += s[i];
            i++;
        }
        x1 = atoi(cxt.c_str());
        x2 = atoi(cxt2.c_str());
        x3 = atoi(cxt3.c_str());
        y1 = atoi(cyt.c_str());
        y2 = atoi(cyt2.c_str());
        y3 = atoi(cyt3.c_str());
    }
}
