#include <iostream>

#include "Option.h"
#include "User.h"

using std::cout;
using std::endl;
using std::cin;

void init();
void menu(int& choice);

int main(void) {
    init();
    return 0;
}

void init() {
    cout << "Enter option" << endl;
    int choice;
    cin >> choice;

    menu(choice);
}

void menu(int& choice) {
    switch(o) {
        case EXIT:
            cout << "EXIT" << endl;
            break;
        case HISTORY:
            break;
        case DEPOSIT:
            break;
        default:
            break;
    }

}
