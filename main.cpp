#include <iostream>
#include <vector>
using namespace std;
void Rec(string *ml , vector<string> &getwords,string current,string original,int n){
           if(current.size()==original.length())
               getwords.push_back(current);
          else{
          for(int i=0; i<ml[original[n]-'0'].length();i++){
           current+=ml[original[n]-'0'][i];
            Rec(ml,getwords,current,original,n+1);
            current=current.substr(0,current.length()-1);
           }
}
}
int main(){
vector<string>words;
string latters[10]={" "," ", "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
string n;
cin>>n;
Rec(latters,words,"",n,0);
for(int i=0; i<words.size(); i++){
      cout<<words[i]<<endl;
}
}
