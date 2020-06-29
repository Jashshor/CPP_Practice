 #include <iostream>
 using namespace std;

 #define a

 int main()
 {
 	
 	#ifdef a
 	cout<<"1";
 	#else
 	cout<<"none static now";
 	#endif
 	void after();
 }

 
