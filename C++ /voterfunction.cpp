//using functions, create a voter application checking system where age has to be above 18, has to be a citizen, have a valid identity card, 
#include <iostream>
#include <string>
using namespace std;

bool hasRightToVote(int age, const string& citizenship, const string& hasIdentity) {
    return (age >= 18 && citizenship == "yes" && hasIdentity == "yes");
}

int main(){
    int age;
    string name;
    string citizenship;
    string hasIdentity;
    
    cout<<"Enter name: ";
    cin>>name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you a citizen? (yes/no): ";
    cin >> citizenship;
    cout << "Do you have an identity card? (yes/no): ";
    cin >> hasIdentity;
    if (hasRightToVote(age, citizenship, hasIdentity)) {
        cout << "You have the right to vote." << endl;
    }
    else {
        cout << "You do not have the right to vote." << endl;
    }
    return 0;
}
