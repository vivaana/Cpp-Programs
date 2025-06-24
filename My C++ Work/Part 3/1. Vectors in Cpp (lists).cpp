#include <iostream>
#include <string>
#include <vector>

int main()
{
    //Vectors are lists
    //Like arrays, but more dynamic  - you can add/remove elements eyc.
    //Downside = they take a lot of memory

    // Example
    // For stack use
    //    std::vector<int> numbers;
    // For heap use
    //    std::vector<int>* numbersOnHeap = new std::vector<int>();

    //vectorName.push_back will append argument to end of vector
    //vectorName.insert(iterator, value) will add elements
    
    //numbers.push_back(12);
    //numbers.push_back(23);
    //numbers.insert(numbers.begin() + 1, 4) // adds a '4' to the 2nd of list
    /*
    std::vector<int> numbers;
    std::vector<std::string> words;
    std::vector<double> floats;
    std::vector<bool> bools;

    //Use reserve to save time so it reserves memory in vector before you even add!
    numbers.reserve(2);

    numbers.push_back(34);
    numbers.push_back(21);

    words.push_back("Hello");
    words.push_back("World");

    std::cout << "List starts!\n";
    for (int i = 0; i < numbers.size(); i += 1){
        std::cout << i+1 << ". " <<  numbers[i] << "\n";
    }

    std::cout << "List starts!\n";
    for (int i = 0; i < words.size(); i += 1){
        std::cout << i+1 << ". " <<  words[i] << "\n";
    }
    */    

    int NumberOfRows;
    int NumberOfCols;

    std::cout << "Tell me how many rows you would like: ";
    std::cin >> NumberOfRows;
    std::cout << "Tell me how many columns you would like: ";
    std::cin >> NumberOfCols;

    std::cout << "\n";

    std::vector<std::vector<int>> table;
    for (int row = 1; row <= NumberOfRows; row += 1){
        std::vector<int> tableRow;
        for (int column = 1; column <= NumberOfCols; column += 1){
            tableRow.push_back(column * row);
        }
        table.push_back(tableRow);
    }

    for (int row = 0; row < table.size(); row += 1){
        for (int column = 0; column < NumberOfCols; column += 1){
            std::cout << table[row][column] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}