//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//
//using namespace std ;
//
//int main (){
//
//	string temp  = "abcdefghijklmnopqrstuvwxyz" ;
//	string temp2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
//
//	string input ;
//
//	while ( getline ( cin , input ) ){
//	
//		for ( int i=0 ; i<input.size() ; i++ ){
//		
//			if ( temp.find ( input[i] ) != string::npos )
//				input[i] = temp [ (temp.find ( input[i] ) + 13) % 26 ] ;
//
//			else if ( temp2.find ( input[i] ) != string::npos )
//				input[i] = temp2 [ (temp2.find ( input[i] ) + 13) % 26 ] ;
//		
//		}
//
//		cout << input << endl ;
//	
//	}
//
//return 0 ;
//}