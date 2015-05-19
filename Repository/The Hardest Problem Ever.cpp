//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <sstream>
//#include <map>
//#include <algorithm>
//#include <iostream>
//
//using namespace std ;
//
//int main(){
//
//	string Text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
//
//	string start , text , end ;
//
//	while ( 1 ){
//
//		cin >> start ;
//
//		if ( start == "ENDOFINPUT" )
//			return 0 ;
//
//		cin.ignore () ;
//		getline ( cin , text ) ;
//
//		cin >> end ;
//
//		for ( int i=0 ; i<text.size() ; i++ ){
//
//			if ( isalpha ( text[i] ) ) 
//				text[i] = Text[ ( Text.find( text[i] ) + 21 ) % 26 ] ;
//
//		}
//
//		cout << text << endl ;
//	
//	}
//
//return 0 ;
//}