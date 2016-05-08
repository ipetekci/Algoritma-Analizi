#include <iostream>
using namespace std;
class dynamicArray{
public:
     dynamicArray( int initSize = 0 )
      : theSize( initSize ), theCapacity( initSize + 1500 ),s(0)
       {
           sayilar = new int[ theCapacity ];
        }
        int size(){return theCapacity;}
        void add(int x){
            if(s==size())resize();
        sayilar[s]=x;
        s++;
        }
         int resize(){
        cout<<"------------------------"<<endl;
        cout<<" yer degisimi yapiliyor.."<<endl;
          cout<<"------------------------"<<endl;
         int s=theSize;
         int *eski_sayilar=sayilar;
         sayilar = new int [theCapacity*2];
         for(int k = 0; k<s;k++)
            sayilar[k]=eski_sayilar[k];
            theSize=s;
            theCapacity=theCapacity*2;
         }
private:
    int theSize;
    int s;
    int theCapacity;
    int * sayilar;

};
using namespace std;

int main()
{

    dynamicArray myD=dynamicArray(10);
    cout<<myD.size()<<endl;
    myD.resize();
    cout<<myD.size()<<endl;
    myD.resize();
    for(int k=0;k<1000;k++)
    myD.add(4);

    cout<<myD.size()<<endl;
    return 0;
}
