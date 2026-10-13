#include <bits/stdc++.h>
int main(){
    int b;
    std::cin >> b;
    for(int i = 1; i <=  b; i++){
        for(int j = 1; j <= i; j++){
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}