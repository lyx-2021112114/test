#include <iostream>

using namespace std;

void output(ostream& out, string& s){
    cout << sizeof(s) << endl;
    out << s << endl;
}

int main(){
    string a = "324454545454544343434343434343434343434343434343434343434343434545454545";
    output(cout, a);
    output(cerr, a);
    return 0;
}