


#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    // Setter 

    void setLength(int l)
    {
        length = l;
    }

    void setWidth(int w)
    {
        width = w;
    }

    // Getter 
    
    int getLength()
    {
        return length;
    }

    int getWidth()
    {
        return width;
    }

    // Method 

    int calculateArea()
    {
        return length * width;
    }
};

int main()
{
    //  object

    Rectangle rect;


    rect.setLength(10);

    rect.setWidth(5);

    

    // Display area
    cout << "Area of Rectangle = " << rect.calculateArea() << endl;

    return 0;
}



// q-2


#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    float salary;
    string designation;

public:
    // Setter 
    void setName(string n)
    {
        name = n;
    }

    void setSalary(float s)
    {
        salary = s;
    }

    void setDesignation(string d)
    {
        designation = d;
    }

    // Getter 
    string getName()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    string getDesignation()
    {
        return designation;
    }
};

int main()
{
    //  object
    Employee emp;

    emp.setName("Rahul");
    emp.setSalary(50000);
    emp.setDesignation("Software Engineer");

    
    cout << "Employee Details" << endl;
    cout << "Name        : " << emp.getName() << endl;
    cout << "Salary      : " << emp.getSalary() << endl;
    cout << "Designation : " << emp.getDesignation() << endl;

    return 0;
}


// q-3



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


// q-4

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


// q-5


#include <iostream>
using namespace std;


class Animal
{
public:
    virtual void sound() = 0;
    virtual void move() = 0;
};


class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog says: Bark Bark" << endl;
    }

    void move()
    {
        cout << "Dog runs on four legs." << endl;
    }
};



class Bird : public Animal
{
public:
    void sound()
    {
        cout << "Bird says: Chirp Chirp" << endl;
    }

    void move()
    {
        cout << "Bird flies in the sky." << endl;
    }
};

int main()
{
    
    Animal *a[2];

    a[0] = new Dog();
    a[1] = new Bird();


    for (int i = 0; i < 2; i++)
    {
        a[i]->sound();
        a[i]->move();
        cout << endl;
    }

    
    delete a[0];
    delete a[1];

    return 0;
}
