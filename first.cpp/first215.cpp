// 21. IO STREAMS   i = input ,  o = output

// Streams
// writing in file 
#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ofstream ofs("my.txt" , ios::trunc);
    ofs<<"john"<<endl;
    ofs.close();
}
// this progrm make a file named my.txt and anything that's we want to insert in file yes we can 



// Reading from file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream ifs("Test.txt");
string name;
int roll;
string branch;
ifs>>name>>roll>>branch;
cout<<name<<endl<<roll<<endl<<branch<<endl;
ifs.close();
}



// • I/O Streams are used for input and output data to and from the program
// • C++ provides class for accessing input output operations
// • Iostream is a base class for all classes
// • Istream is for input
// • Cin is the object of istream
// • ostream is for output
// • Cout is an object of ostream
// •
// • ifstream is a file input stream
// • ofstream is a file output stream
