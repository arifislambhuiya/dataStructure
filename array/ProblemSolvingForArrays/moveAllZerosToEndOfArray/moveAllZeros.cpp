#include <bits/stdc++.h>
using namespace std;

    void move_zero_to_right(vector<int> &m){
        int count = 0;
        for(int i = 0; i < m.size();i++){
            if(m[i] == 0){
                count++;
                m.erase(m.begin() + i);
                i--;
            }
        }

        for(int i = 0; i < count;i++){
            m.push_back(0);
        }

        for(int i = 0;i<m.size();i++){
            cout <<m[i] << " ";
        }
    }



int main(){

    vector<int> m {5,6,0,4,6,0,9,0,8};
    move_zero_to_right(m);

    return 0;
}