#include "Weapon.h"
static int  s = 0;

inline bool Weapon::selectWeight() {
    if (MAX_WEIGHT < weight_weapon) return true;
    return false;
}

inline int Weapon::sumWeight(Weapon* w) {
    return s += w->weight_weapon;
}
inline int Weapon::sumWeight(int weight) {
    return weight + this->weight_weapon;
}
inline Weapon::Weapon(string name_weapon, int damage_weapon, int weight_weapon) : name_weapon(name_weapon), damage_weapon(damage_weapon), weight_weapon(weight_weapon) {}
inline Weapon::Weapon() : Weapon("Weapon not selected", 0, 0) {}
inline Weapon::~Weapon() {
    cout << endl << endl << "Deleting an object:" << endl << endl;
    cout << "\tname weapon: " << name_weapon << endl << "\t\tdamage: " << damage_weapon << endl << "\t\tweight: " << weight_weapon << endl;
}

inline int Weapon::get_Damage() { return damage_weapon; }
inline int Weapon::get_Weight() { return weight_weapon; }
inline string Weapon::get_Name() { return name_weapon; }
inline void Weapon::set_Damage(int damage_weapon) { this->damage_weapon = damage_weapon; }

inline Characteristic::Characteristic(int power) : power(power) {};
inline int Characteristic::GetDamage(Weapon* w) { return power + w->get_Damage(); }


//int MyMath::count = 0;
inline double MyMath::Add(double a, double b) { MyMath::count++; return a + b; }
inline double MyMath::Sub(double a, double b) { MyMath::count++; return a - b; }
inline double MyMath::Mult(double a, double b) { MyMath::count++; return a * b; }
inline double MyMath::Div(double a, double b) { MyMath::count++; return a / b; }
