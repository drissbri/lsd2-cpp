#include <iostream>

using namespace std;

class Shape {
  public:
    int width;
    int height;
};


class Triangle : public Shape {
  public:
    int area();
};

class Rectangle : public Shape {
  public:
    int area();
};