#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream myfile;
	myfile.open("file1.txt");
	
	myfile << "kasun deshan pawani";
	
	myfile.close();
	
	return 0;
}
