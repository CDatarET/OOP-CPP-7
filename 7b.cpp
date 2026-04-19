#include <iostream>
#include <vector>
using namespace std;

float avg(vector<float> v){
    vector<float>::iterator i;
    float sum = 0;
    for(i = v.begin(); i != v.end(); i++) sum += *i;
    return sum / v.size();
}

float mini(vector<float> v){
    vector<float>::iterator i;
    float small = 2147483647;
    for(i = v.begin(); i != v.end(); i++) small = min(small, *i);
    return small;
}

float maxi(vector<float> v){
    vector<float>::iterator i;
    float big = -2147483648;
    for(i = v.begin(); i != v.end(); i++) big = max(big, *i);
    return big;
}

int main(){
    vector<float> v = {50, 70, 77, 10, 40, 39};
    cout << avg(v) << endl;
    cout << mini(v) << endl;
    cout << maxi(v) << endl;
    return(0);
}