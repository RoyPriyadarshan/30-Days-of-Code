#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i2;
    std::cin>>i2;
    std::cout<<i+i2<<endl;
    double d2;
    std::cin>>d2;
    std::cout<<fixed<<setprecision(1)<<d+d2<<endl;
    string str;
    std::cin.ignore();
    std::getline(cin,str);
    std::cout<<s+str<<endl;
    return 0;
}
