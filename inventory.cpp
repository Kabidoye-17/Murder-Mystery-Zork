#include "inventory.h"
#include <iostream>

template <typename T>
void Inventory<T>::operator+=(T im){
    // finds the first empty spot available and assigns it to the new item
    for (int i = 0; i < 5; i++){
        if (inven[i].getName().compare("")){
            inven[i] = im;
            cout << "inventory set at index"<< i << endl;
            cout << inven[i].getName() << endl;
            return;
        }
    }

}

template <typename T>
void Inventory<T>::operator -=(T im){
    // finds the item to remove and replaces it with an empty placeholder item
    T temp;
    for (int i = 0; i < 5 ; i++){
        if (inven[i].getName().compare(im.getName())){
            inven[i] = temp;
            return;
        }
    }
}
template class Inventory<Item>;
