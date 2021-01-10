#include<iostream>
#include<string>
using namespace std;

class Area {
    public:
    virtual double Calculation(){};
};

class Square : public Area {
    double a;
    public:
    Square(double s) : a(s) {};
    double Calculation(){return a*a;};
};

class Rectangle:public Area {
    double a, b;
    public:
    Rectangle(double s, double t) : a(s), b(t) {};
    double Calculation(){return a*b;};
};

class AreaCal {
    public:
    void cal(Area *area) {
        cout << "Area = " << area->Calculation() << endl;
    };
};

int main(){
    Square *sq = new Square(2.0);
    Rectangle *rec = new Rectangle(2.0, 3.0);

    AreaCal ac;
    ac.cal(sq);
    ac.cal(rec);
    /*delete sq;
    delete rec;*/
    return 0;
}
