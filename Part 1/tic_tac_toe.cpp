#include <iostream>
#include <string>

using namespace std;

int* createAnArray(string* Array1, string* Array2, string* Array3, string* Array4, string* irrelevant){
    for (int i = 0; i < 5; i++){
        cout << Array4[i] << " ";
    }
    for (int i = 0; i < 5; i++){
        cout << Array3[i] << " ";
    }
    for (int i = 0; i < 5; i++){
        cout << Array2[i] << " ";
    }
    for (int i = 0; i < 5; i++){
        cout << Array1[i] << " ";
    }
    for (int i = 0; i < 5; i++){
        cout << irrelevant[i] << " ";
    }
}

int* player1(string* Array1, string* Array2, string* Array3, string* Array4, string* irrelevant){
    string player1Move = "";
    cout << "Please make your move: ";
    cin >> player1Move;
    if (player1Move == "A1"){
        if (Array1[1] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array1[1] = "🟢";
        }
    } else if (player1Move == "B1"){
        if (Array1[2] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array1[2] = "🟢";
        }
    } else if (player1Move == "C1"){
        if (Array1[3] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array1[3] = "🟢";
        }
    } else if (player1Move == "A2"){
        if (Array2[1] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array2[1] = "🟢";
        }
    } else if (player1Move == "B2"){
        if (Array2[2] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array2[2] = "🟢";
        }
    } else if (player1Move == "C2"){
        if (Array2[3] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array2[3] = "🟢";
        }
    } else if (player1Move == "A3"){
        if (Array3[1] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array3[1] = "🟢";
        }
    } else if (player1Move == "B3"){
        if (Array3[2] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array3[2] = "🟢";
        }
    } else if (player1Move == "C3"){
        if (Array3[3] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array3[3] = "🟢";
        }
    } else{
        player1(Array1, Array2, Array3, Array4, irrelevant);
    }
}

int* player2(string* Array1, string* Array2, string* Array3, string* Array4, string* irrelevant){
    string player1Move = "";
    cout << "Please make your move: ";
    cin >> player1Move;
    if (player1Move == "A1"){
        if (Array1[1] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array1[1] = "❌";
        }
    } else if (player1Move == "B1"){
        if (Array1[2] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array1[2] = "❌";
        }
    } else if (player1Move == "C1"){
        if (Array1[3] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array1[3] = "❌";
        }
    } else if (player1Move == "A2"){
        if (Array2[1] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array2[1] = "❌";
        }
    } else if (player1Move == "B2"){
        if (Array2[2] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array2[2] = "❌";
        }
    } else if (player1Move == "C2"){
        if (Array2[3] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array2[3] = "❌";
        }
    } else if (player1Move == "A3"){
        if (Array3[1] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array3[1] = "❌";
        }
    } else if (player1Move == "B3"){
        if (Array3[2] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array3[2] = "❌";
        }
    } else if (player1Move == "C3"){
        if (Array3[3] != "⬜️"){
            player1(Array1, Array2, Array3, Array4, irrelevant);
        } else{
            Array3[3] = "❌";
        }
    } else{
        player1(Array1, Array2, Array3, Array4, irrelevant);
    }
}


int* checkWin(string* Array1, string* Array2, string* Array3, string* Array4, string* won){
    //For bottom row
    if ((Array1[1] == Array1[2] && Array1[2] == Array1[3]) && (Array1[1] == "❌" || Array1[1] == "🟢")){
        if(Array1[1] == "❌"){
            cout << "Player ❌ has won!";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }
    //For middle row
    else if ((Array2[1] == Array2[2] && Array2[2] == Array2[3]) && (Array2[1] == "❌" || Array2[1] == "🟢")){
        if(Array2[1] == "❌"){
            cout << "Player ❌ has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }    
    //For top row
    else if ((Array3[1] == Array3[2] && Array3[2] == Array3[3]) && (Array3[1] == "❌" || Array3[1] == "🟢")){
        if(Array3[1] == "❌"){
            cout << "Player ❌ has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }
    //For 1st column
    else if ((Array1[1] == Array2[1] && Array2[1] == Array3[1]) && (Array3[1] == "❌" || Array3[1] == "🟢")){
        if(Array3[1] == "❌"){
            cout << "Player ❌ has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }
    //For 2nd column
    else if ((Array1[2] == Array2[2] && Array2[2] == Array3[2]) && (Array3[2] == "❌" || Array3[2] == "🟢")){
        if(Array3[2] == "❌"){
            cout << "Player ❌ has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }
    //For 3rd column
    else if ((Array1[3] == Array2[3] && Array2[3] == Array3[3]) && (Array3[3] == "❌" || Array3[3] == "🟢")){
        if(Array3[3] == "❌"){
            cout << "Player ❌ has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }
    //For '/' diagonal
    else if ((Array1[1] == Array2[2] && Array2[2] == Array3[3]) && (Array3[3] == "❌" || Array3[3] == "🟢")){
        if(Array3[3] == "❌"){
            cout << "Player ❌ has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }
    //For '\' diagonal
    else if ((Array1[3] == Array2[2] && Array2[2] == Array3[1]) && (Array3[1] == "❌" || Array3[1] == "🟢")){
        if(Array3[1] == "❌"){
            cout << "Player ❌ has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
        else{
            cout << "Player 🟢 has won!\n";
            won[0] = "yes";
            //ALSO BREAK IN THE GAME LOOP
        }
    }
    else if ((Array1[1] != "⬜️") && (Array1[2] != "⬜️") && (Array1[3] != "⬜️") && (Array2[1] != "⬜️") && (Array2[2] != "⬜️") && (Array2[3] != "⬜️") && (Array3[1] != "⬜️") && (Array3[2] != "⬜️") && (Array3[3] != "⬜️")){
        cout << "IT IS A DRAW!\n";
        won[0] = "yes";
    }
}

int main(){
    cout << "Make sure you make your moves in chess notation\n";
    string Array4[] = {"⬛️", "⬛️", "⬛️", "⬛️", "\n"};
    string Array3[] = {"❸", "⬜️", "⬜️", "⬜️", "\n"};
    string Array2[] = {"❷", "⬜️", "⬜️", "⬜️", "\n"};
    string Array1[] = {"❶", "⬜️", "⬜️", "⬜️", "\n"};
    string irrelevant[] = {"🅞", "🅰 ", "🅱 ", "🅲", "\n"};
    string won[] = {"no"};

    while(true){
        if (won[0] == "no"){
            createAnArray(Array1, Array2, Array3, Array4, irrelevant);
            player1(Array1, Array2, Array3, Array4, irrelevant);
            checkWin(Array1, Array2, Array3, Array4, won);
        } else if (won[0] == "yes"){
            cout << "Thanks for playing!";
            break;
        }
        if (won[0] == "no"){
            createAnArray(Array1, Array2, Array3, Array4, irrelevant);
            player2(Array1, Array2, Array3, Array4, irrelevant);
            checkWin(Array1, Array2, Array3, Array4, won);
        } else if (won[0] == "yes"){
            cout << "Thanks for playing!";
            break;
        }
    }
}