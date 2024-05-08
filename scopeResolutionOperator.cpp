
#include <iostream>

using namespace std;

class mycls{
    
    public :
    
    int a = 10;
};

class mycls2 :public mycls{
  public:
  int a = 20;
    
};

int main()
{
    mycls2 myobj;
    cout<<myobj.mycls::a<<"old"<<endl;
    cout<<myobj.mycls2::a<<"new";

}
