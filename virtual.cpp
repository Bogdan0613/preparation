//#include <iostream>
//
//using namespace std;
//
//
//class Gun{
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
//class Bazooka :public Gun{
//public:
//    void Shoot() override{
//        cout << "Babaaah"<<endl;
//    }
//};
//
//class Player{
//public:
//    void Shoot(Gun *gun){
//        gun->Shoot();
//    }
//};
//
//int main(){
//Gun gun;
//SubmachineGun machinegun;
//Bazooka bazooka;
//
////Gun *weapon = &gun(BANG!); or Gun *weapon = &machinegun(BANG! BANG! BANG!)
//Player player;
//player.Shoot(&bazooka);
//
//return 0;
//}

