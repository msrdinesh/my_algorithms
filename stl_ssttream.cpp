#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector <int> v;
    int i;
    while(ss>>i)
    {
        v.push_back(i);
        if(ss.peek()==',')
        {
            ss.ignore();
        }
    }
    return v;
}

int main() {
    string str;
    cout<<"give the comma seprated ingeter"<<endl;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}