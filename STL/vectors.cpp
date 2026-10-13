#include <bits/stdc++.h>
using namespace std;
int main(){
    // vector <int> v;
    // v.push_back(1);
    // cout << v[0] << endl;
    // v.emplace_back(2);
    // cout << v[0] << " " << v[1] << endl;


    // vector <int> vec(5, 100);
    // cout << vec[0] << endl;

    // vector <int> vec2(5);
    // cout << vec2[0] << endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it : v){
        cout << it << " ";
    } 
    return 0;
}