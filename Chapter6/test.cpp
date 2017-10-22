#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1={1,2,3,4,5};
    for(auto iter=v1.cbegin();iter!=v1.cend();iter++){
        cout<<*iter<<endl;
    }
}
