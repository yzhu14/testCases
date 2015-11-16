//resizing vector
#include <iostream>
#include <vector>
int main ()
{
std::vector<int> myvector;
for (int i=1;i<10;i++) myvector.push_back(i);
myvector.resize(5);
myvector.resize(8,10);
myvector.resize(10);

std::cout<<"myvector: ";
for (int i=0;i<myvector.size();i++) std::cout<<"\t"<<myvector[i]<<"\n";
return 0;
}