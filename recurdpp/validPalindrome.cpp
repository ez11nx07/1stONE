#include<iostream>
using namespace std;
bool palin(string s){
    int i = 0;
    int j = s.length()-1;
    string str = s;
 while(i<j){
    swap(s[i],s[j]);
    i++;
    j--;
 }
 if(str == s) return true;
 else return false;
}
int main(){
    string s;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    int n = s.length();
    cout<<boolalpha<<palin(s)<<endl;
}