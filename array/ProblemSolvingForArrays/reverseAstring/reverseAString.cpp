//Reverse a string without affecting special characters
#include <bits/stdc++.h>
using namespace std;

void reverse(string s){
    char temp[s.length()];
    int x = 0;

    for(int i = 0; i < s.length();i++){
        if(s[i] >='a' && s[i] <= 'z' || s[i] >='A' && s[i] <= 'Z'){
            temp[x++] = s[i];
        }
        
    }

    reverse(temp,temp+x);

    x = 0;
    for(int i = 0; i < s.length();i++){
        if(s[i] >='a'&& s[i] <= 'z' || s[i] >='A' && s[i] <= 'Z'){
            s[i] = temp[x++];
        }
    }
    cout << "reversed string is : " << s;
}



int main(){

    string s = " Ab,c,de!$";
    reverse(s);

    return 0;
}