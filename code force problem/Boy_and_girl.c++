


#import<bits/stdc++.h>
using namespace std;
int main()
{
  char x;
  set<char>e;
  while(cin>>x)
  e.insert(x);
  cout<<(e.size()%2?"IGNORE HIM!":"CHAT WITH HER!");
  
}