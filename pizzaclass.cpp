#include <iostream>
#include <string>
using namespace std;

class Pizza{
    char size;
    string pname;
    char type;
    float price;
    string toppings;
    string base;
    char category;
    
    public:
        Pizza(){
            cout<<"Default Constructor";
            size='N';
            pname="NULL";
            type='N';
            price=000;
            toppings="NULL";
            base="NULL";
            category='N';
            cout<<"Size= "<<size<<endl<<"Pizza Name"<<pname<<endl<<"Price= "<<price<<endl<<"Toppings= "<<toppings<<endl<<"Pizza Base= "<<base<<endl<<"Category= "<<category<<endl;
        }
        Pizza(char s, string pn, char pt, float pp, string top, string pb, char pc){
            cout<<"Parameterized Construction called"<<endl;
            size=s;
            pname=pn;
            type=pt;
            price=pp;
            toppings=top;
            base=pb;
            category=pc;
            cout<<"Size= "<<s<<endl<<"Pizza Name= "<<pn<<endl<<"Price= "<<pp<<endl<<"Toppings= "<<top<<endl<<"Pizza Base= "<<pb<<endl<<"Category= "<<pc<<endl;
        }
        Pizza(Pizza &obj){
            size= obj.size;
            this->pname=obj.pname;
            this->type=obj.type;
            this->price=obj.price;
            this->toppings=obj.toppings;
            this->base=obj.base;
            this->category=obj.category;
        }
        
};

class Order{
    int OrderID;
    string name;
    string paytype;
    string address;
    long int mobile;
    public:
        Order(){
            OrderID = 0;
            name="NA";
            paytype="NA";
            address="NA";
            mobile=1234567890;
        }
};

int main() {
    //Pizza p1;
    Pizza p2('M',"Farmhouse",'V',200,"Mushroom, Capsicum","Thin Crust",'D');
    Order o1;
    return 0;
}
