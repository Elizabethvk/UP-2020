//Exam intro to prog
//Ellzie
//Task03

#include <iostream>
#include <new>
using std::cout;
using std::cin;
using std::endl;
using std::nothrow;

unsigned getSize();
int* allocArr(unsigned size);
void findCombination(int* items, unsigned numOfItems, int& currentWeight, int limit, unsigned currentItem, int* combos);

int main() {
    unsigned numOfBoxes = 0, numOfItems=0;
    
    numOfBoxes = getSize();

    /*
    cin >> numOfBoxes;
    if (!cin) {
        cout << "Try with an actual number!" << endl;
        return -1;
    }
    */

    int* boxes = nullptr;
    boxes = allocArr(numOfBoxes);

    /*
    int* boxes = new(nothrow) int[numOfBoxes];
    if (!boxes) {
        cout << "Error alloc memory!" << endl;
        delete[] boxes;
        return -1;
    }

    for (unsigned i = 0; i < numOfBoxes; i++) {
        if (!cin) {
            cout << "Try with actual numbers!" << endl;
            delete[] boxes;
            return -1;
        }
        cin >> boxes[i];
    }
    */

    numOfItems = getSize();

    /*
    cin >> numOfItems;
    if (!cin) {
        cout << "Try with an actual number!" << endl;
        return -1;
    }

    int* items = new(nothrow) int[numOfItems];
    if (!items) {
        cout << "Error alloc memory!" << endl;
        delete[] items;
        return -1;
    }

    for (unsigned i = 0; i < numOfItems; i++) {
        if (!cin) {
            cout << "Try with actual numbers!" << endl;
            delete[] items;
            return -1;
        }
        cin >> boxes[i];
    }
    */

    int* items = nullptr;
    items = allocArr(numOfItems);

    int* combos = allocArr(numOfItems);
    if (!combos) {
        cout << "Error alloc memory!" << endl;
        delete[] combos;
        return -1;
    }

    for (unsigned j = 0; j < numOfItems; j++) {
        combos[j] = -1;
    }

    int sum = 0;

    for (unsigned i = 0; i < numOfItems; i++) {
        sum += items[i];
    }

    int tmpSum = 0;

    for (unsigned i = 0; i < numOfBoxes; i++) {
        

        int currentWeight = 0, currentItem=0;
        

        findCombination(items, numOfItems, currentWeight, boxes[i], currentItem + 1, combos);

        

        for (unsigned j = 0; j < numOfItems; j++) {
            if (combos[j] != -1) {
                cout << combos[j] << " ";
                tmpSum += (combos[j]-1);
            }
        }

        cout << endl;

        for (unsigned j = 0; j < numOfItems; j++) {
            combos[j] = -1;
        }

        if ((tmpSum == sum && i > 0) || tmpSum == 0) {
            cout << -1 << endl;
        }
        
    }

    delete[] combos;
    delete[] boxes;
    delete[] items;
    return 0;
}

unsigned getSize() {
    unsigned size;
    cin >> size;
    if (!cin) {
        cout << "Try with an actual number!" << endl;
        return -1;
    }
    return size;
}

int* allocArr(unsigned size) {

    int* arr = new(nothrow) int[size];
    if (!arr) {
        cout << "Error alloc memory!" << endl;
        delete[] arr;
        return nullptr;
    }

    for (unsigned i = 0; i < size; i++) {
        if (!cin) {
            cout << "Try with actual numbers!" << endl;
            delete[] arr;
            return nullptr;
        }
        cin >> arr[i];
    }

    return arr;
}

void findCombination(int* items, unsigned numOfItems, int& currentWeight, int limit, unsigned currentItem, int* combos) {
    
    if (currentItem >= numOfItems) {
        return;
    }
    else if (items[currentItem] == -1) {
        findCombination(items, numOfItems, currentWeight, limit, currentItem + 1, combos);
    }

    if (currentWeight > limit) {
        items[currentItem - 1] = -1;
        findCombination(items, numOfItems, currentWeight, limit, currentItem + 1, combos);
    }
    else if (currentWeight < limit) {
        combos[currentItem] = (currentItem + 1);
        currentWeight += items[currentItem];
        findCombination(items, numOfItems, currentWeight, limit, currentItem + 1, combos);
    }
    else {
        combos[currentItem] = (currentItem + 1);
        return;
    }
    //currentWeight += items[currentItem];
}
