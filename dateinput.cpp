#include <iostream>
using namespace std;
class Date{
    int day;
    int month;
    int year;
    public:
    Date(){
        day=1;
        month=1;
        year=1999;
    }
    Date(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    Date(Date & obj){
        day=obj.day;
        month=obj.month;
        year=obj.year;
    }
    void getdate(){
        cout<<day<<"/";
    }
    void getmonth(){
        cout<<month<<"/";
    }
    void getyear(){
        cout<<year;
    }
    void printdate(){
        cout<<"enter date"<<endl;
        cin>>day;
        cout<<"enter month"<<endl;
        cin>>month;
         cout<<"enter year"<<endl;
        cin>>year;
    }
};
int main() {
    Date sal;
    sal.printdate();
    sal.getdate();
    sal.getmonth();
    sal.getyear();
    return 0;
}
