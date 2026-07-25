//Valid palindome

#include <iostream>
#include <String>
using namespace std;

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<='Z') || (ch >= '0' && ch<= '9')){
        return 1;
    }
    return 0;
}

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch<='9')){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string str){
   int s = 0;
   int e = str.length() -1;

   while(s<e){

    if(str[s] != str[e]){
        return 0;
    }else{
        s++;
        e--;
    }
   }
   return 1;
}

bool fullmethod(string s){
     int i=0;
     string temp = "";

     for(int j=0;j<s.length();j++){
       if(valid(s[j])){
        temp.push_back(s[j]);
       }
     }

     for(int j = 0;j<temp.length();j++){
        temp[j] = toLowerCase(temp[j]);
     }

     return isPalindrome(temp);
}

int main(){

cout << "Enter the string" << endl;

string s;

cin>>s;

bool result = fullmethod(s);

if(result == 0){
    cout << "This is not in Palindrome" << endl;
}else{
    cout << "This is in Plindrome" << endl;
}

return 0;

}