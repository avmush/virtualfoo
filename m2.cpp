#include <iostream>
using namespace std;

class armenian
{
  public:
   void bar()
   {
     sayHi();  
   }

  private:
   virtual void sayHi()
   {
    cout<<"barev"<<endl;
   }
    
};

class russian : public armenian
{
 private:   
  void sayHi() override
  {
   cout<<"privet"<<endl;   
  }
};

int main()
{
 armenian Ani;
 Ani.bar();
    
 russian Anya;   
 Anya.bar();
}
