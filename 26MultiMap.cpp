#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
  multimap<string, int> m; //multi map , we cannot use sqaure brackets and have to insert in it and emplace in it.
  
 
  m.emplace("tv", 6);
  m.emplace("tv", 6);
  m.emplace("tv", 6);
  m.emplace("tv", 6);

  m.erase(m.find("tv")); // delete only one pair and not others 

  // m.erase("tv"); //delete all pairs of tv from it.

  for(auto p: m){
    cout <<p.first << " " << p.second << endl;
      }

    
    return 0;
}