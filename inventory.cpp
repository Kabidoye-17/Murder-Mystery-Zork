#include "inventory.h"
#include <iostream>

template <typename T>
void Inventory<T>::operator+=(T im) {
    // finds the first empty spot available and assigns it to the new item
    T* ptr = inven; // pointer to the start of the array
    for (int i = 0; i < 5; i++) {
        if ((ptr + i)->getName().compare("") == 0) { // Ensure correct comparison
            *(ptr + i) = im;
            return;
        }
    }
}


template <typename T>
void Inventory<T>::operator-=(T im) {
    // finds the item to remove and replaces it with an empty placeholder item
    T temp;
    T* ptr = inven; // pointer to the start of the array
    for (int i = 0; i < 5; i++) {
        if ((ptr + i)->getName().compare(im.getName()) == 0)        {
            *(ptr + i) = temp;
            return;
        }
    }
}
template <typename T>
Inventory<T>::~Inventory() {
}
template class Inventory<Item>;
