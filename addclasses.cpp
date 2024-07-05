#include <iostream>
using namespace std;

class add
{
public:
    int a,b;
    int sum(){
        return a+b;
    }
};

int main()
{
    add obj;
    // int a, b;
    char choice;
    do
    {
        cout << "Enter 2 numbers: " << endl;
        cin >> obj.a>> obj.b;
        cout << "Sum: " << obj.sum() << endl;
        cout << "Do you want to continue(y/n): " << endl;
        cin >> choice;

    } while (choice != 'n');

    return 0;
}
