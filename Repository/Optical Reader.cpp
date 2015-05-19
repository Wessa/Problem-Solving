//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <sstream>
//#include <iomanip>
//
//using namespace std ;
//
//int main (){
//
//	int N , v ;
//	string Q = "ABCDE" ;
//	
//
//	while ( cin >> N && N != 0 ){
//	
//		while ( N -- ){
//
//			bool check = false ;
//			char res = ' ' ;
//		
//			for ( int i=0 ; i<5 ; i++ ){
//				
//				cin >> v ;
//
//				if ( v <= 127 && ( Q.find ( res ) == string::npos ) )
//					check = true , res = Q[i] ;
//
//				else if ( v <= 127 && ( Q.find ( res ) != string::npos ) )
//					check = false ;
//
//			}
//
//			if ( check )
//				cout << res << endl ;
//			
//			else
//				cout << "*" << endl ;
//		
//		}
//	
//	}
//
//return 0 ;
//}