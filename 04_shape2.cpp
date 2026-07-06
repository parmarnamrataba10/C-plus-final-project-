

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


    virtual void display()
    {
        cout << "Shape Color: " << color << endl;
    }
};


class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r, string c)
    {
        radius = r;
        setColor(c);
    }

    void display()
    {
        float area = 3.14 * radius * radius;

        cout << "Circle" << endl;
        cout << "Color : " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area  : " << area << endl;
    }
};


class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w, string c)
    {
        length = l;
        width = w;
        setColor(c);
    }

    void display()
    {
        float area = length * width;
        cout << "Rectangle" << endl;
        cout << "Color : " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area  : " << area << endl;
    }
};

int main()
{
    
    Shape *shapes[2];

    shapes[0] = new Circle(5, "Red");
    shapes[1] = new Rectangle(8, 4, "Blue");

    
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->display();
    }

    // Free memory
    for (int i = 0; i < 2; i++)
    {
        delete shapes[i];
    }

    return 0;
}