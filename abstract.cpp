//
//#include <iostream>
//
//using namespace std;
//
//
//class Weapon{
//public:
//    virtual void Shoot() = 0;
//};
//
//class Gun : public Weapon{
//public:
//   virtual void Shoot(){
//        cout << "BANG!" << endl;
//    }
//};
//
//class SubmachineGun : public Gun{
//public:
//    void Shoot() override{
//        cout << "BANG! BANG! BANG!"<<endl;
//    }
//};
//
//class Bazooka :public Weapon{
//public:
//    void Shoot() override{
//        cout << "Babaaah"<<endl;
//    }
//};
//
//class Knife : public Weapon{
//public:
//   void Shoot() override{
//       cout << "VJUH!"<<endl;
//   }
//};
//
//class Player{
//public:
//    void Shoot(Weapon *weapon){
//        weapon->Shoot();
//    }
//};
//
//int main(){
////(Weapon anything) is not possible class Weapon is abstract
//Gun gun;
//SubmachineGun machinegun;
//Bazooka bazooka;
//Knife knife;
//
////Gun *weapon = &gun(BANG!); or Gun *weapon = &machinegun(BANG! BANG! BANG!)
//Player player;
//player.Shoot(&knife);
//
//return 0;
//}

