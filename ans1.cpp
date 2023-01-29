
</*question link 

*/>
#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
int t;
cin.tie(0);
cout.tie(0);
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n%2==1) std::cout << "-1" << std::endl;
    else std::cout << "1 "<<n/2 << std::endl;
}
return 0;
}