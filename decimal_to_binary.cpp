#include <iostream>
using namespace std;


void convert_to_binay(int n){
    if (n == 0){
        return;
    }
    convert_to_binay(n/2);
    cout<< n %2;
}

int main(){
    
    int n = 234; //changeable
    convert_to_binay(n);
    
    
    return 0;
}
