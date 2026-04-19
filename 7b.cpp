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
    vector<float> v;

    char yn = 'y';
    while(yn == 'y'){
        cout << "Enter a number: ";
        float f;
        cin >> f;
        v.push_back(f);
        cout << "Enter another number? y/n: ";
        cin >> yn;
    }

    cout << avg(v) << endl;
    cout << mini(v) << endl;
    cout << maxi(v) << endl;
    return(0);
}