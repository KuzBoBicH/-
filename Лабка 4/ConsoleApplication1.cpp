#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;
int i;

class Array {
    float* m;
    int n;

public:
    int all = 1;

    Array() {
        n = 8;
        m = new float[n];
        set_data();
    }
    ~Array() {
        delete m;
    }
    void set_data() {
        for (i = 0; i <= n; i++) {
            if (i % 2 == 0) {
                m[i] = i - 4.0;
            }
            else {
                m[i] = i - 6.0;
                all = all *m[i];
                
            }
        }
        cout << all << "\n";
       
    }

 
};

int main() {
    Array();
    Array set_data();
    system("pause");
    return 0;
}
