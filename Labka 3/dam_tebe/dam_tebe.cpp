#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    bool find = false;
    int i = 0;
    ifstream f("pups.txt");

        char line[100], name[20];
        cout << "Enter Name" << endl;
        cin >> name;
        while (!f.eof())
        {
            f.getline(line, sizeof(line));
            while (line[i] == name[i++]) if (line[i] == ' ') find = true;
            if (find) break;
        }
        if (find) cout << line << endl;
        else cout << "Not find" << endl;
        

    f.close();
    return 0;
    
}


