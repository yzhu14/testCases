//resizing global vector
#include <iostream>
#include <vector>
std::vector<int> myvector(20);//global
int main ()
{
	myvector[0]=10;
	myvector[1]=11;
for (int i=1;i<10;i++) myvector.push_back(i);
myvector.resize(15);
myvector.resize(8,10);
myvector.resize(10);

for (int i=0;i<10;i++)myvector[i]=i;

std::cout<<"myvector: ";
for (int i=0;i<myvector.size();i++) std::cout<<"\t"<<myvector[i]<<"\n";
return 0;
}