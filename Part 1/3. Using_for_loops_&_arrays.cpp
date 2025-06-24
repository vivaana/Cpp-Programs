#include <string>

#include <iostream>

using namespace std;

//int numbers[4] 
//  creates an empty array with 4 elements
//int numbers[] = {10, 8, 17, 2}
//  creates an array with 4 elements containing values 10, 8, 17, 2

int main(){
    int stringBytage = sizeof(string);
    int intBytage = sizeof(int);
    int charBytage = sizeof(char);
    int boolBytage = sizeof(bool);
    int longBytage = sizeof(long);
    int doubleBytage = sizeof(double);
    int floatBytage = sizeof(float);

    cout << "Sizes of different datatypes\n";
    cout << "\tSize of a string: " << stringBytage << "\n";
    cout << "\tSize of a int: " << intBytage << "\n";
    cout << "\tSize of a char: " << charBytage << "\n";
    cout << "\tSize of a bool: " << boolBytage << "\n";
    cout << "\tSize of a long: " << longBytage << "\n";
    cout << "\tSize of a double: " << doubleBytage << "\n";
    cout << "\tSize of a float: " << floatBytage << "\n";
    cout << "⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥⬜️🟥\n";

    int numbers[10];

    int moreNumbers[] = {10, 41, 12, 7, 56};

    //An array is a datastructure which can hold multiple values (elements) in it. Their number of elements cannot be changed are being defined.

    //An element is one single value in an array.

    //string words[3];
    //bool TrueOrFalse[2];
    //double HeightsInMetres[5];
    //cout << *(numbers + 1) << "\n";


    for(int i = 0; i < 10; i += 1){
        numbers[i] = i*i;
        cout << "The " << i << " value is: " << numbers[i] << "\n";
    }

    cout << *(numbers + 2) << "\n";
    cout << *(numbers + 3) << "\n";

    int index;
    cout << "Give me an index: ";
    cin >> index;

    index -= 1;

    cout << *(numbers + index) << "\n";

    int arraySize = sizeof(moreNumbers);
    int numElements = sizeof(moreNumbers) / sizeof(moreNumbers[0]);

    cout << "Size of array: " << numElements << " elements\n";
    return 0;

}

