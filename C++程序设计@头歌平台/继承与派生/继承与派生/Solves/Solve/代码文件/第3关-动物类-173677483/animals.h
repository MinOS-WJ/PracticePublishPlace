#pragma once
#include<bits/stdc++.h>
class Animal{
   protected:
  std::string name;
public:
Animal(const std::string&names):name(names){}

void breath(){
    std::cout<<name<<"可以呼吸\n";
}
void forage(){
    std::cout<<name<<"可以觅食\n";
}
};
class Dog:public Animal{
    public:
    Dog(const std::string &s):Animal(s){}
    void run(){
        std::cout<<name<<"可以奔跑\n";
    }
};
class Fish:public Animal{
    public:
    Fish(const std::string &s):Animal(s){}
    void swim(){
        std::cout<<name<<"可以游动\n";
    }
};