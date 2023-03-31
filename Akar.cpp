#include <iostream>

using namespace std;

int akar(int angka){
    int x = 1;
    int y = 0;\
    while (x != y){
        y = x;
        x = (x + angka / x)/2;
    }
    return x;
}
int main(){
    cout<<akar(16)<<endl;
}
