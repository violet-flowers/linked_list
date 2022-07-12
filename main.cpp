#include <iostream>
#include <fstream>
#include "LList.h"


using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2){
        cout << "Usage" << argv[0] << "name of Input File"<<endl;
    }

    auto *linkedList = new LList<int>();
    ifstream listStream;
    listStream.open(argv[1],ios::in);
    int data;

    while (listStream >> data){
        if(isdigit(data)){
            linkedList->append(data-'0');
        }else {
            linkedList -> append(data);
        }
    }

    linkedList -> print();
    return 0;
}
