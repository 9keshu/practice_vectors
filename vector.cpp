#include "/Users/keshumalviya/Desktop/myPrograms/stdc++.h"
using namespace std;

int main(){
    vector<int> array;
    for (int i = 1; i <=10; i++){
        array.push_back(i);
    }
    for (vector<int>::iterator  it = array.begin(); it != array.end(); it++){
        cout << *it << " ";
    }
    return 0;
}