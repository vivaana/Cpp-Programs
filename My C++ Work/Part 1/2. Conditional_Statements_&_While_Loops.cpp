#include <iostream>
//Hash -> compiler function
//Include <iostream> imports the input/output library
#include <string>

using namespace std;
// This line makes it that you don't have to type in 'std::' before everything that belongs to the standard library.


int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int quacky = number % 2;
    
    if (quacky == 0){
        while (number > 0){
            number -= 2;
            cout << number;
            cout << "\n";
        }
    }
    else{
        number -= 1;
        while (number > 0){
            number -= 2;
            cout << number;
            cout << "\n";
        }
    }
    while (true){
        string inputty;
        cout << "Enter a string: ";
        cin >> inputty;
        cout << "\t" + inputty + "\n";
        if (inputty == "quit"){
            break;
        }
    }
}