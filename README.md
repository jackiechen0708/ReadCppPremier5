# ReadCppPremier5
new
ReadBooooooooooooooooooooooooooooooK
1.support g++ with c++11
 //第一种,直接包含在源程序文件中,如第一行代码所示  
#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>  
using namespace std;  
int main(int argc,char **argv)  
{  
    cout<<"hello world!"<<endl;  
    auto i=10;  
    cout<<i<<endl;  
    return 0;  
}  
  
  
//第二种方法,可以直接取别名方法 如下所示:  
alias g++='g++ -std=c++11'  
  
g++ hw.cpp -o hw  
