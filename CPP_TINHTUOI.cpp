// CPP_TINHTUOI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int namsinh;
    string can, chi;
    cin >> namsinh;
    cout << "NAM SINH: " << namsinh << endl;
    switch (namsinh % 10) {
    case 0:
        can = "CANH";
        break;
    case 1:
        can = "TAN";
        break;
    case 2:
        can = "NHAM";
        break;
    case 3:
        can = "QUY";
        break;
    case 4:
        can = "GIAP";
        break;
    case 5:
        can = "AT";
        break;
    case 6:
        can = "BINH";
        break;
    case 7:
        can = "ĐINH";
        break;
    case 8:
        can = "MAU";
        break;
    case 9:
        can = "KY";
        break;
    }
    switch (namsinh % 12) {
    case 0:
        chi = "THAN";
        break;
    case 1:
        chi = "DAU";
        break;
    case 2:
        chi = "TUAT";
        break;
    case 3:
        chi = "HOI";
        break;
    case 4:
        chi = "TY";
        break;
    case 5:
        chi = "SUU";
        break;
    case 6:
        chi = "DAN";
        break;
    case 7:
        chi = "MEO";
        break;
    case 8:
        chi = "THIN";
        break;
    case 9:
        chi = "TY";
        break;
    case 10:
        chi = "NGO";
        break;
    case 11:
        chi = "MUI";
        break;
    }
    cout << "Tuổi: " << can << " " << chi << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
