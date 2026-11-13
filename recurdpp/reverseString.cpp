#include<iostream>
using namespace std;
string rev(string& s,int i,int j){
    if(i>=j){
        return s;
    }
    swap(s[i],s[j]);
    return rev(s,i+1,j-1);

}
int main(){
    string s;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    int n = s.size();
    cout<<rev(s,0,n-1);
    return 0;
}