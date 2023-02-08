//required to use cout and cin
#include <iostream>
//required to use ofstream and ifstream
#include <fstream>

using namespace std;

int main(){
        //declare the variables we will use
	string inputFile="input.txt",s=""; 
	double a,b,c,d,e,f;
	string sa,sb,sc,sd,se,sf;
	char ca,cb,cc,cd,ce,cf;


	//data type=ofstream identifier=fout
	ofstream fout; //how to open multiple files?  
	
	//open the file output.txt
	fout.open("output.txt");  //what if output.txt does not exist

	//write into the file
	fout << "Hello World!" << endl;

	//data type identifier
	ifstream fin; //how to open multiple files?

	//open the file
	fin.open(inputFile);

	//READ FROM THE FILE
	//read 6 numbers
	fin >> a >> b >> c >> d >> e >> f; //read a,b,...
	cout << "Content of file ";
	cout << "a=" << a << " b=" << b << " c=" << c
		<< " d=" << d << " e=" << e << " f=" << f << endl;

	//read 6 strings
	fin >> sa >> sb >> sc >> sd >> se >> sf; //read sa, sb, sc, ...
	cout << "Content of file ";
	cout << "sa=" << sa << " sb=" << sb << " sc=" << sc
		<< " sd=" << sd << " se=" << se << " sf=" << sf << endl;


	//read 6 chars
	fin >> ca >> cb >> cc >> cd >> ce >> cf; //read sa, sb, sc, ...
	cout << "Content of file ";
	cout << "ca=" << ca << " cb=" << cb << " cc=" << cc
		<< " cd=" << cd << " ce=" << ce << " cf=" << cf << endl;
	

	//read mixed set
	fin >> a >> sa >> ca;
	cout << "content of file ";
	cout << "a= " << a <<" sa="<<sa << " ca=" << ca << endl;


	//WRITE EVERYTHING WE READ 
	//into the file "output.txt";
	fout << a << b << c << d << e << f
	     << sa << sb << sc << sd << se << sf
	     << ca << cb << cc << cd << ce << cf << endl;


	//close the files
	fout.close();
	fin.close();

	cin >> a;

	return 0;
}




