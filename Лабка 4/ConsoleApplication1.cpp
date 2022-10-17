#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;
int i;

class Array {
    float* m;
    int n;
    
public:
    Array(int k) {
        cout << "Constr z param" << endl;
        n = k;
        m = new float[n];
        set_data();
    }
    ~Array() {
        delete m;
        cout << "\nDestruktor." << endl;
    }
    void set_data() {
        for (i = 0; i < n; i++) {
            if (i % 2 == 0) {
                m[i] = i - 4.0;
            }
            else {
                m[i] = i + 6.0;
            }
        }
        output();
    }
    void output() {
        cout << "KIlkist dodatnih:" << endl;
        for (i = 0; i < n; i++) {
            cout << m[i] << " ";
        }
    }

    friend void sum(Array &obj);
};
void sum(Array &obj) {
    float sum = 0.0;
    cout << "\nDodatni element: " << obj.m << "\n";
    for (i = 0; i < obj.n; i++) {
        if (!(i % 2) == 0) {
            cout << obj.m[i] << " ";
            sum = sum + obj.m[i];
        }
    } cout << endl;
    cout << "Summa dodatnih elementiv: " << sum;
}
int main() {
    Array arr(8);
    sum(arr);
    system("pause");
    return 0;
}