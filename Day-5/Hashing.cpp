#include <iostream>
using namespace std; 


void hashingChar() {
    
    char ch = 'n';
    hash<char> char_hash; 
    cout << "The hashed value of character 'n' is: " << char_hash(ch) << endl; 
}


int main() { 
    hashingChar(); 
} 