#include <iostream>
#include <fstream>
#include "LList.h"


using namespace std;

int main(int argc, char *argv[]) {
    bool isDigit = false;

    if (argc != 2) {
        cout << "Usage" << argv[0] << "name of Input File" << endl;
    }

    auto linkedList_int = new LList<int>;
    auto linkedList_char = new LList<char>;
    ifstream listStream;
    listStream.open(argv[1],ios::in);
    char data_char;

    while (listStream >> data_char) {
        if(isdigit(data_char)) {
            isDigit = true;
            linkedList_int->append(data_char - '0');
        }
        else {
            linkedList_char->append(data_char);
        }
    }

    if(isDigit){
        string palindrome = linkedList_int->isPalindrome() ? "\nIs" : "\nIs not";
        linkedList_int->print();
        cout<<palindrome<<" a palindrome."<<endl;
    }else {
        string palindrome = linkedList_char->isPalindrome() ? "\nIs" : "\nIs not";
        linkedList_char->print();
        cout<<palindrome<<" a palindrome."<<endl;
    }




    listStream.close();
    return 0;
}