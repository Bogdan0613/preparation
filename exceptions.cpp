#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//try catch
//int main() {
//    string path = "smth.txt";
//    ifstream fin;
//    fin.exceptions(ifstream::badbit|ifstream::failbit);
//
//    try{
//        cout << "Trying to find the file"<<endl;
//    fin.open(path);
//    cout << "File opened successfully"<<endl;
//    }
//    catch(const ifstream::failure &ex){
//        cout << ex.what() << endl;
//        cout << ex.code() << endl;
//        cout << "File opening error"<<endl;
//    }
//    return 0;
//}


//throw

//void Foo(int value){
//    if(value < 0)
////    throw value;
//    throw exception("The number is less then zero!");
//    cout << "Variable is "<< value << endl;
//}
//
//int main(){
//    Foo(14);
//    try{
//        Foo(-10);
//    }
//    catch(const exception & ex){
//        cout << "We caught "<<ex.what()<<endl;
//    }
//
//    return 0;
//}

// personal exception class


//class MyException : public exception{
//public:
//    MyException(char* msg):exception(msg){
//
//    }
//private:
//    int dataState;
//};
//
//void Foo(int value){
//    if(value < 0){
//        throw exception("The number is less than zero");
//    }
//    if(value == 1){
//        throw MyException("The number is equal to one", value);
//    }
//
//    cout << "The variable is "<<value<<endl;
//}
//
//int main(){
//    try {
//        Foo(1);
//    }
//    catch(exception &ex){
//        cout << "Block 1 we caught"<< ex.what() <<endl;
//    }
//    return 0;
//
//}