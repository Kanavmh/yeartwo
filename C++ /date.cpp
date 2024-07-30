#include <iostream>
#include <string>
using namespace std;

class Date{
    public:
    int day,d;
    int month,m;
    int year,y;
    
    Date()
    {
        day=1;
        month=1;
        year=2011;
    }
   /* void setdate();
    void getdate();
    
    void setdate(int d,int m, int y){
        day=d;
        month=m;
        year=y;
    }
    void getdate(int ){
        cout<<"Day: "<<d<<endl;
        cout<<"Month: "<<m<<endl;
        cout<<"Year: "<<y<<endl;
    }*/
    
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
    int getdate(){
        return day;
    }
    int getmonth(){
        return month;
    }
    int getyear(){
        return year;
    }
    void printdate(){
        cout<<"The date is: "<<endl;
        cout<<"Day: "<<day<<endl;
        cout<<"Month: "<<month<<endl;
        cout<<"Year: "<<year;
    }
    
};

int main() {
    Date d1;
    Date d2(1,1,2024);
    d2.printdate();
    
    return 0;
}
