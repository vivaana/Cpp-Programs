#include <string>

#include <iostream>

using namespace std;

void outputIre(){
    cout << "Facts about Ireland\n";
    cout << "\t-The submarine was invented in Ireland by John Phillip Holland\n";
    cout << "\t-St Patrick was born in Wales, not in Ireland\n";
    cout << "\t-Instead of shamrock, it is harp that is national symbol of Ireland\n";
}

void outputFr(){
    cout << "Facts about France\n";
    cout << "\t-France is the largest country in the EU\n";
    cout << "\t-In France, you can marry a dead person\n";
    cout << "\t-Tin cans, the hairdryer, and the hot air balloon were all invented in France.\n";
}

void outputViv(){
    cout << "Facts about Viv\n";
    cout << "\t-Name: Viv\n";
    cout << "\t-Age: 12\n";
    cout << "\t-School: QE Boys\n";
    cout << "\t-Status: Happy\n";
}

void outputLargerAndSmaller(int a, int b){
    if (a > b){
        cout << a << " is larger than " << b;
    } else{
        cout << b << " is larger than " << a;
    }
}

void sizeOfString(string A, string B){
    int stringBytageA = sizeof(A);
    cout << stringBytageA << "\n";
    int stringBytageB = sizeof(B);
    cout << stringBytageB << "\n";
}

void integerOperations(int Aa, int Bb){
    int addition = Aa + Bb;
    cout << addition;
    int subtraction = Aa - Bb;
    cout << addition;
    int multiplication = Aa * Bb;
    cout << multiplication;
    int division = Aa / Bb;
    cout << division;    
}

int main(){
    sizeOfString("Apple", "Banana");
    outputLargerAndSmaller(23,41);
    outputIre();
    outputFr();
    outputViv();

    return 0;
}