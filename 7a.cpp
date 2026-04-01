#include <iostream>
#include <stack>
using namespace std;

int main(){
    cout << "Hello World\n";
    
    stack<int> stk;
    char yn = 'y';
    while (yn == 'y'){
        cout << "Enter element: ";
        int n;
        cin >> n;
        stk.push(n);

        cout << "Enter another element? y/n: ";
        cin >> yn;
    }

    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }

    cout << endl;

    return(0);
}