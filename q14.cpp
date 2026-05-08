#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cin >> a >> b;
        }

        switch(choice) {
            case 1:
                cout << a + b << endl;
                break;

            case 2:
                cout << a - b << endl;
                break;

            case 3:
                cout << a * b << endl;
                break;

            case 4:
                cout << a / b << endl;
                break;

            case 5:
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while(choice != 5);

    return 0;
}
