// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void F2C(float fah){
    int cel = (fah - 32.0) * 5.0/9.0;
    cout << fah << "F Equal to " << cel << "C" << endl;
}

void C2F(float cel){
    int fah = (cel * 1.8) + 32.0;
    cout << cel << "C Equal to " << fah << "F" << endl;
}

int main() {
    float fah;
    float cel;
    int choice;
    
    cout << "1.Fahrenheit To Celcius" << endl << "2.Celcius To Fahrenheit" << endl << "Please Enter your choice : ";
    cin >> choice;
    if(choice == 1){
        cout << "Please Enter temp(F) : ";
        cin >> fah;
        F2C(fah);
    }else if(choice == 2){
        cout << "Please Enter temp(C) : ";
        cin >> cel;
        C2F(cel);
    }else{
        cout << "Invalid Choice !!!" << endl << endl;
        main();
    }
    

    return 0;
}
