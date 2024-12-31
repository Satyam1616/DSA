#include <iostream>
using namespace std;
class Demo{
  private:
   int rollNo;

  public:

  void setRollNo(int rollNo){
    this->rollNo = rollNo;
  }

  void display(){
    cout << "Roll Number" << this->rollNo << endl;
  }
};
int main(){
  Demo s1;

  s1.setRollNo(101);
  s1.display();

  return 0;
}