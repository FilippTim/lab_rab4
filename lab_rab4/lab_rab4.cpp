#include "Weapon.cpp"

int MyMath::count = 0;

int main()
{
    Weapon Rifle;
    Weapon Gun("Gun", 11, 4);
    Gun.set_Damage(39);
    cout << "name weapon: " << Gun.get_Name() << endl << "\tdamage: " << Gun.get_Damage() << endl << "\tweight: " << Gun.get_Weight() << endl;
    cout << "name weapon: " << Rifle.get_Name() << endl << "\tdamage: " << Rifle.get_Damage() << endl << "\tweight: " << Rifle.get_Weight() << endl;
    Weapon Knife("knife", 70, 10);
    cout << "name weapon: " << Knife.get_Name() << endl << "\tdamage: " << Knife.get_Damage() << endl << "\tweight: " << Knife.get_Weight() << endl;
    Weapon* Minigun = new Weapon("Minigun", 15, 20);
    cout << "name weapon: " << Minigun->get_Name() << endl << "\tdamage: " << Minigun->get_Damage() << endl << "\tweight: " << Minigun->get_Weight() << endl;
    cout << "Check selectWeight: " << Gun.selectWeight() << endl;
    cout << "Check sumWeight(int weight) : " << Knife.sumWeight(40) << endl;
    cout << "Check sumWeight(Weapon* w) : " << Gun.sumWeight(&Gun) << "    " << Gun.sumWeight(&Knife) << "    " << Gun.sumWeight(Minigun) << "    " << Gun.sumWeight(&Rifle) << endl;
delete Minigun;
    

Weapon rpg("rpg", 80, 10);
    Characteristic rpg0(40);
    cout << "class MyMath: " << endl;

    cout << MyMath::Sub(14, 6) << endl;
    cout << MyMath::Mult(14, 6) << endl;
    cout << MyMath::Add(14, 6) << endl;
    cout << MyMath::Div(14, 7) << endl;
    cout << MyMath::count << endl;
    
}

