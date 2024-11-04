#include <iostream>
#include <string>
using namespace std;

int main(){
    string months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int festivals[]={3,2,3,2,1,1,1,3,1,3,2,2};
    string month;
    cout << "Enter the month: ";
    cin >> month;
    if (!month.empty()) {
        month[0] = toupper(month[0]);
        for (size_t i = 1; i < month.size(); ++i) {
            month[i] = tolower(month[i]);
        }
    }
    bool monthFound = false;
    for(int i=0;i<12;++i){
        if (months[i] == month){
            cout << "Number of festivals in "<<month<<" 2025: "<<festivals[i]<<endl;
            monthFound = true;
            break;
        }}
    if(!monthFound){
        cout<<"Invalid month."<<endl;
    }
    return 0;
}
