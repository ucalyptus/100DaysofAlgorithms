#include<bits/stdc++.h>

using namespace std;

int main(){



	
	map<int,int> mp;

mp[4]= 400;
mp[3] = 300;


mp.insert(make_pair(10,100));
mp[7]  = 700;




	for(auto it = mp.begin(); it != mp.end(); it++)  {
	
	
	cout<<it->first<<"-----"<<it->second<<endl;
	}




multimap<int,int> mum;

mum.insert(make_pair(4,100));
mum.insert(make_pair(4,1000));
mum.insert(make_pair(10,900));
mum.insert(make_pair(10,400));

for(auto tt = mum.begin(); tt != mum.end(); tt++){

cout<<tt->first<<"-------"<<tt->second<<endl;
}


return 0;
	
	}
