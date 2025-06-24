#pragma once
#include <string>
#include <iostream>

template <typename Item>
Item* makeArray(int size){
    Item* newArray = new Item[size];
    for(int i = 1; i <= size; i += 1){
        std::cout << "What value would you like for element " << i << ":";
        std::cin >> newArray[i];
    }
    return newArray;
}

template <typename Item>
class List{
    private:
        int size;
        Item* items;

    public:
        List (int size){
            this->size = size;
            this->items = new Item(size);
        }

        void addItem(Item itemToAdd, int index){
            items[index] = itemToAdd;
        }

        void showItems(){
            for (int i = 0 ; i < size ; i++){
                std::cout << items[i] << ", ";
            }
        }
};












