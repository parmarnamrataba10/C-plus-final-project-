

#include <iostream>
using namespace std;


class Shape
{
private:
    string color;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }
};


class Circle : public Shape
{
private:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }

    float calculateArea()
    {
        return 3.14 * radius * radius;
    }
};


class Rectangle : public Shape
{
private:
    float length, width;

public:
    void setData(float l, float w)
    {
        length = l;
        width = w;
    }

    float calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.setColor("Red");
    c.setRadius(8);

    r.setColor("Blue");
    r.setData(11, 2);

    cout << "Circle Color : " << c.getColor() << endl;
    cout << "Circle Area : " << c.calculateArea() << endl;

    cout << "\nRectangle Color : " << r.getColor() << endl;
    cout << "Rectangle Area : " << r.calculateArea() << endl;

    return 0;
}