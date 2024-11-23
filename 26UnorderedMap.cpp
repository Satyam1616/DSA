#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
  unordered_map<string, int> m; //do not sort the data and let it in be unordered or random format.
  // time complexity O(1) mostlyy almost everytime
 
  m.emplace("tv", 6);
  m.emplace("laptop", 6);
  m.emplace("fridge", 6);
  m.emplace("watch", 6);

   // delete only one pair and not others 

  // m.erase("tv"); //delete all pairs of tv from it.

  for(auto p: m){
    cout <<p.first << " " << p.second << endl;
      }

    
    return 0;
}