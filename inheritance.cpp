//derived class (child) the class inherits from another class 
//base class (parent) the clas being inherited from 

//To inherit from a class use the : symbol.
#include <iostream>
#include <string.h>
using namespace std;

//base class 
class vehicle {
public :
string brand = "Ford";
void honk() 
{
    cout << "Tuut ,tuuut ! \n";
}



};

//Derived class
class Car : public vehicle{
public:
string model ="Mustang";


};
//why and when to use inheritance
//it is useful for code reusability 
int main()
{
Car objCar;
objCar.honk();
cout << objCar.model << " "<< objCar.brand<<endl;


}

































