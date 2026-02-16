//comsc-210 | Lab 7 | Alexander Sierra
#include <iostream>
using namespace std;

string* reverseArray(string *);
void displayArray(string *);

int main() {
    string *sptr = nullptr;
    sptr = new string[5];

    sptr[0] = "Alexander";
    sptr[1] = "Max";
    sptr[2] = "Sierra";
    sptr[3] = "Alex";
    sptr[4] = "Maximus";

    cout << "Original array: ";
    displayArray(sptr);

    cout << "Reversed array: ";
    reverseArray(sptr);
    displayArray(sptr);

    delete [] sptr;
    return 0;
}
// reverses the array passed to it
string* reverseArray(string *Arr){
    string temp;
    for(int i = 0; i < 2; i++){
        temp = Arr[i];
        Arr[i] = Arr[4-i];
        Arr[4-i] = temp;
    }
    return Arr;
}
// outputs the array passed to it nicely
void displayArray(string *Arr){
    for(int i = 0; i < 5; i++){
        cout << *(Arr + i) << " ";
    }
    cout << endl;
}