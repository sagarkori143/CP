#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero{
   
   public:
   string name;
   int age;
   int height;

   public:
   string getName(){
    return this->name;
   }
   void setName(string x){
    this->name=x;
   }
};

class juniorSagar: public Hero{

};

int main() {
    Hero Sagar;
    Sagar.setName("Sagar");
    Sagar.getName();
    return 0;
}
