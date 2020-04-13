// Main function of the C++ program.
#include <iostream>
#include<cmath>
#include <string>
using namespace std;
class V3 {
    private:
        double x, y, z;
        double length() const
        { return sqrt(x * x + y * y + z * z); };

    public:
        V3(double p = 0.0, double q = 0.0, double r = 0.0)
        {
            x = p; y = q; z = r;return;
        }
        V3 operator+(V3 const &b) const{
            return V3(x + b.x, y + b.y, z + b.z);}
        V3 operator*(double factor) const{
            return V3(x*factor, y*factor, z*factor);}
        ~V3() { return; }
};
class V3Queue {
    private:
        int front, nWaiting;
        int elements[100];

    public:
        V3Queue() {
        front = 0;
        nWaiting = 0;
        return;
        }
        ~V3Queue() { return; }
        bool insert(int value);
        bool remove(int &value);
};
bool V3Queue::insert(int value) {
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
bool V3Queue::remove(int &value) {
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
}
int main(){
    V3Queue q;
    //int value(10);

    //q.front = 0;
    //q.nWaiting = 0;
    int driver;
    int value;
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

