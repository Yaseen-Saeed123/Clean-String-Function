#include <iostream>
#include <string>
#include <array>
using namespace std;
bool is_found(array<char, 32> myArray, char target){
    bool is_Found = false;
    for (char c : myArray){
        if(target == c){
            is_Found = true;
            break;
        }
    }
    return is_Found;
}
string clean_str(string str){
    string result;
    array<char, 32> special_chars = {
        '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/',
        ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
    };
    for (char c : str){
        if (is_found(special_chars, c)){
            continue;
        }
        result.push_back(c);
    }
    return result;
}
int main(){
    // Test fuction
    cout << clean_str("!@I# l$o^ve &Re*al M(adr__id-");
    //Output: I love Real Madrid
    return 0;
}