#pragma once
#include <iostream>
#include <string>
#define MAX_WEIGHT 70
using namespace std;

class Weapon
{
    friend class Characteristic;
public:
    Weapon(std::string name_weapon, int damage_weapon, int weight_weapon);
    Weapon();
    ~Weapon();

    bool selectWeight();
    int sumWeight(Weapon* w);
    int sumWeight(int weight);
    int get_Damage();
    int get_Weight();
    string get_Name();
    void set_Damage(int damage_weapon);
private:
    int damage_weapon, weight_weapon;
    string name_weapon;
};

class Characteristic
{
public:
    Characteristic(int power);
    int power;
    int GetDamage(Weapon* w);
};

class MyMath
{
public:

    static double Add(double a, double b);
    static double Sub(double a, double b);
    static double Mult(double a, double b);
    static double Div(double a, double b);
    static  int count;
};
