#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

class Smail {

private:

    double R;
    double r;

public:
    void setFaceR(double RValue) {
        R = RValue;
    }
    void setFaceRSq(double S) {
        R = sqrt(S / M_PI);
    }
    void setEyer(double rValue) {
        r = rValue;
    }

    void setEyerSq(double S) {
        r = sqrt(S / M_PI);
    }
    double getFaceR() {
        return R;
    }
    double getFaceSq() {
        return M_PI * R * R;
    }
    double getEyer() {
        return r;
    }
    double getEyeSq() {
        return M_PI * r * r;
    }
    Smail() { 
        R = r = 0.0;
    }
    Smail(double R, double r) { 
        setFaceR(R);
        setEyer(r);
    }
    void print_sqrt() { 
        cout << M_PI * R * R << "\n";
    }
};
int main()
{
    Smail* obj = new Smail();
    obj->setFaceRSq(50);
    cout << obj->getFaceR() << "\n";
    obj->setEyerSq(10);
    cout << obj->getEyer() << "\n";
    obj->print_sqrt();
    system("pause");
    return 0;
}