

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