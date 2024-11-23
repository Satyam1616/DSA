#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
  map<string, int> m; //map sort the data in ascending order 
  // (isme key apne aap sort ho jaati h)
  m["head"] = 1;
  m["tv"] = 2;
  m["laptop"] = 3;
  m["machine"] = 4;

  // m.insert({"camera", 5});
  m.emplace("drone", 6);

  m.erase("tv");

  for(auto p: m){
    cout <<p.first << " " << p.second << endl;
      }

    if(m.find("camera") != m.end()){
      cout << "found\n";
    } else {
      cout << "not found\n";
    }
    return 0;
}