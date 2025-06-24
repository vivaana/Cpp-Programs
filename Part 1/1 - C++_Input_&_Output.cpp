#include <iostream>
//Hash -> compiler function
//Include <iostream> imports the imput/output library
#include <string>

using namespace std;
// This line makes it that you don't have to type in 'std::' before everything that belongs to the standard library.


int main()
{
    string Joke_1;
    cout << "Why do French people eat snails? ";
    cin >> Joke_1;
    if (Joke_1 == "because they dont like fast food"){
        cout << "Well done! You got it correct!";
    } else{
        cout << "Nope \n";
        cout << "because they dont like fast food";
    }

    // double arrow sends data to the console
    // like sending data 'Hello World!' leftwards to the cout
    return 0;
}