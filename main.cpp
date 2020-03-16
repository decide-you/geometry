//
// Created by decider on 01.03.2020.
//
#include <cmath>
#include <iostream>
using namespace std;

void inpsh(char s[], int &x, int &x1, int &x2, int &x3, int &y, int &y1,
           int &y2, int &y3, float &r) {
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

void Print(char s[], int x, int x1, int x2, int x3, int y, int y1, int y2,
           int y3, float r, int &numb) {
  int i = 0;
  string shape;
  while (s[i] != '(') {
    shape += s[i];
    i++;
  }
  if (shape == "circle") {
    cout << numb << ". ";
    for (int k = 0; s[k] != '\0'; k++) { // Output input
      cout << s[k];
    }
    cout << "\n    x = " << x << "\n    y = " << y
         << "\n    perimeter = " << 2 * M_PI * r
         << "\n    area = " << M_PI * r * r << endl;
  } else if (shape == "triangle") {
    cout << numb << ". ";
    for (int k = 0; s[k] != '\0'; k++) { // Output input
      cout << s[k];
    }
    cout << "\n    x1 = " << x1 << ", y1 = " << y1 << "\n    x2 = " << x2
         << ", y2 = " << y2 << "\n    x3 = " << x3 << ", y3 = " << y3 << endl;
  }
  numb++;
}

int main() {
  char s1[50];
  char s2[50];
  float r;
  int x = 0, y = 0, x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0, numb = 1;
  string shape;
  cout << "Enter a 1st, 2nd shape, set its values" << endl;
  cin.getline(s1, 50);
  cin.getline(s2, 50);
  cout << endl;
  inpsh(s1, x, x1, x2, x3, y, y1, y2, y3, r);
  Print(s1, x, x1, x2, x3, y, y1, y2, y3, r, numb);
  cout << endl;
  inpsh(s2, x, x1, x2, x3, y, y1, y2, y3, r);
  Print(s2, x, x1, x2, x3, y, y1, y2, y3, r, numb);
  cout << endl;
  return 0;
}
