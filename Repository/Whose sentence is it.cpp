//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//
//using namespace std ;
//
//int main (){
//
//	int n ;
//	string sentence , a , b ;
//
//	cin >> n ;
//
//	cin.ignore() ;
//
//	while ( n -- ){
//
//		getline ( cin , sentence ) ;
//
//		if ( sentence.size() > 4 ){
//		
//			a = sentence.substr ( 0 , 5 ) ;
//			b = sentence.substr ( sentence.size() - 5 , 5 ) ;
//
//			if ( a == "miao." && b != "lala." )
//				cout << "Rainbow's" << endl ;
//
//			else if ( a != "miao." && b == "lala." )
//				cout << "Freda's" << endl ;
//
//			else 
//				cout << "OMG>.< I don't know!" << endl ;
//		
//		}
//
//		else 
//			cout << "OMG>.< I don't know!" << endl ;
//	
//	}
//
//return 0 ;
//}