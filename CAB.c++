#include <iostream>
using namespace std;

int main() {
  int T;
  cin>>T;
  while(T--){
    int X,Y;
    cin>>X>>Y;
    if(X>Y){
        cout<<"\n SECOND";
        
    }
    else if(X==Y){
        cout<<"\n ANY";
        
    }
    else{
     cout<<"\n FIRST";
     }
    }

	return 0;
}
