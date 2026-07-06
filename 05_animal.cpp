
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