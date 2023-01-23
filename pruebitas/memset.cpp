// C++ program to demonstrate memset
#include <cstring>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	bool str[14] ;
	memset(str, false, sizeof(str));
	cout <<str<<endl; //al ser un arreglo te da la direccion de memoria
    for(auto a:str){
        cout<<a<<" ";
    }
	return 0;
}
