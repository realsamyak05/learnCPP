#include <bits/stdc++.h>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

    int getHealth()
    {
        return this->height;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Sleeping" << endl;
    }
};

int main()
{
    Male m1;
    cout << m1.age << endl;
    cout << m1.color << endl;
    cout << m1.height << endl;
    m1.sleep();

    return 0;
}