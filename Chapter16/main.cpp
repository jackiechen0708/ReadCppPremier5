#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
int compare(const T &v1, const T &v2){
    if (v1 < v2) return -1;
    if (v1 > v2) return 1;
    return 0;
}

template <unsigned N, unsigned M>
int compare(const char(&p1)[N],const char(&p2)[M]){
    return strcmp(p1,p2);
}

template <unsigned N,typename T>
constexpr unsigned get_array_length(const T(&a)[N]){
    return N;
}

int main(){
    cout << compare(1,0) << endl;
    cout << compare("1","01") << endl;
    float a[30];
    cout << get_array_length(a)<<endl;
}
