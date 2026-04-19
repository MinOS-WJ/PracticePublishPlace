#pragma once
#include<string>
using namespace std;
class Car{
protected:
std::string maker;
std::string model;
public:
Car(const string &m,const std::string &mod):maker(m),model(mod){}
virtual void drive(){
    std::cout<<maker<<"-"<<model;
}
};

class FuelCar:virtual public Car{
    public:
    FuelCar(const std::string &m,const std::string &mod):Car(m,mod){}
    void drive()override{
        Car::drive();
        std::cout<<"可以用燃油驱动\n";
    }
};

class ElectricCar:virtual public Car{
   public:
   ElectricCar(const string &m,const std::string &mod ):Car(m,mod){}
   void drive()override{
       Car::drive();
       std::cout<<"可以用电能驱动\n";
   }
   
};
class HybridCar : public FuelCar, public ElectricCar {
public:
    HybridCar(const string& m, const string& mod) : Car(m, mod), FuelCar(m, mod), ElectricCar(m, mod) {}
    void drive() override {
        // FuelCar::drive();  
        // ElectricCar::drive(); 
        Car::drive();  
        cout << "既可以用燃油驱动，也可以用电能驱动" << endl;
    }
};