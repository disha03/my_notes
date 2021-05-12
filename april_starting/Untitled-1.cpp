#include<bits/stdc++.h>
using namespace std;
bool solve(string &str1, string &str2) {
   while (str1.size() > 0) {
      int index = str1.find(str2);
      if (index == -1)
      break;
      str1.erase(index, str2.size());
   }
   return (str1.size() == 0);
}
int main() {
   string str1 = "abcabc", str2 = "xyz";
   solve(str1, str2);
   cout<<str1.size()<<"\n";
   return 0;
}