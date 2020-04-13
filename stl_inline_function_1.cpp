// Main function of the C++ program.

#include <iostream>
#include<cmath>
#include <string>
using namespace std;

class IntQueue {
    private:
        int front, nWaiting;
        int elements[100];

    public:
        IntQueue() {
            front = 0;
            nWaiting = 0;
            return;
        }
        ~IntQueue() { return; }
        bool insert(int value);
        bool remove(int &value);
};
bool IntQueue::insert( int value) {
    if (nWaiting == 100) {
        cout << "Q Full !" << endl;
        return false;
    } 
    else {
        elements[(front + nWaiting) % 100] = value;
        nWaiting++;
        return true;
    }
}
bool IntQueue::remove( int &value) {
    if (nWaiting == 0) {
        cout << "Q Empty !" << endl;
        return false;
    } 
    else {
        value = elements[front];
        front = (front + 1) % 100;
        nWaiting--;
        return true;
    }
};
int main(){
    IntQueue q;
    //int value(10);

    //q.front = 0;
    //q.nWaiting = 0;
    int driver;
    char command;
    while (true) {
        cin >> command;
        if (command == 'd'){
            cin >> driver;
            if (!q.insert(driver)) {
                cout << "Queue full.Cannot register.\n";
            }
        }
        else if (command == 'c'){
            if (!q.remove(driver)) {
                cout << "No taxi available.\n";
            }
            else cout<< "Assigning:" << driver<< endl;
        }
        else if(command == 'x')
        break;
    }
   
}




