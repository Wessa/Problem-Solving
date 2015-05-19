//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//
//using namespace std ;
//
//int main (){
//
//	string diet , breakFast , lunch ;
//	int N ;
//
//	cin >> N ;
//
//	cin.ignore() ;
//
//	while ( N -- ){
//		
//		getline ( cin , diet ) ;
//		getline ( cin , breakFast ) ;
//		getline ( cin , lunch ) ;
//
//		string res ;
//
//		if ( breakFast.size() != 0 ){
//
//			for ( int i=0 ; i<breakFast.size() ; i++ ){
//			
//				if ( diet.find( breakFast[i] ) == string::npos )
//					res = "CHEATER" ;
//
//				else 
//					diet.erase ( diet.begin() + diet.find( breakFast[i] ) ) ;
//		
//			}
//
//		}
//
//		if ( lunch.size() != 0 ){
//
//			for ( int i=0 ; i<lunch.size() ; i++ ){
//			
//				if ( diet.find( lunch[i] ) == string::npos )
//					res = "CHEATER" ;
//
//				else 
//					diet.erase ( diet.begin() + diet.find( lunch[i] ) ) ;
//			
//			}
//
//		}
//
//		sort ( diet.begin() , diet.end() ) ;
//
//		if ( res == "CHEATER" ) 
//			cout << res << endl ;
//
//		else 
//			cout << diet << endl ;
//
//	}
//
//return 0 ;
//}