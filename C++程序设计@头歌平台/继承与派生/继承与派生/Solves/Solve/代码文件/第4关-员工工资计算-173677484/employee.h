#pragma once
#include <bits/stdc++.h>
class Employee{
   protected:
    char name[20];
    int hours;
    public:
    Employee(const char*n,int h){
        strcpy(name,n);
        hours=h;
    }
    virtual int getWage(){
        return hours*20;
    }
    const char*getName(){
        return name;
    }
    void print(){
        std::cout<<getName()<<"的工资是："<<getWage()<<"\n";
    }
};
class PartTimeEmployee:public Employee{
public:
    PartTimeEmployee(const char*n,int h):Employee(n,h){}
    int getWage()override{
        if(hours<=8){
            return hours*12;
        }
        else{
            return hours*20;
        }
    }
};