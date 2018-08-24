#include<bits/stdc++.h>

using namespace std;

inline int read(){
	char ch=getchar();int x=0,k=1; 
	while (ch<'0'||ch>'9'){if(ch=='-'){k=-1;}ch=getchar();}
	while (ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*k;
} 

int main(){
	int n=read(),m=read(),wc=1;
	//cin>>n>>m;
	queue<int> rxz;
	for(int i=1;i<=n;i++)rxz.push(i);
	//cout<<rxz.front()<<endl;
	while(!rxz.empty()){
		if(wc==m){
			cout<<rxz.front()<<" ";
			rxz.pop();
			wc=1;
		}
		else{
			wc++;
			rxz.push(rxz.front());
			rxz.pop();
		}
	}
	return 0;
}
