#include <bits/stdc++.h>
using namespace std;

bool isAlphabetic(char x){
    return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));

}

void reverse(char s[]){
    int r = strlen(s) -1, l = 0;

    while(l > r){
        if(!isAlphabetic(s[l]))
            l++;
        else if (!isAlphabetic(s[r]))
            r--;
        else{
            swap(s[l] , s[r]);
            l++;
            r--;
        }

    }
}

int main(){
     char s[] = "a!!!b.c.d,e'f,ghi";
    cout << "Input string: " << s << endl;
    reverse(s);
    cout << "Output string: " << s << endl;


    return 0;
}