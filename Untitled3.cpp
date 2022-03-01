#include<iostream>

using namespace std;
string toString(int n){
	string s = "";
	while (n > 0){
		s = char(n % 10 + '0') + s;
		n /= 10;
	}
	return s;
}
string lineEncoding(string s)
{
    int count=1;
    int i=1;
    string news="";
    while(i<s.size()){
        if(s[i]==s[i-1]){
            count++;
            i++;
        }else{
            news=news+toString(count)+s[i-1];
            count=1;
            i++;
        }
    }
    news=news+toString(count)+s[s.size()-1];
    for(int i=0;i<s.size();i++){
        if(news[i]=='1'){
            news.erase(i,1);
        }
    }
    return news;    
}

int main() {
	cout<<lineEncoding("");
	return 0;
}
