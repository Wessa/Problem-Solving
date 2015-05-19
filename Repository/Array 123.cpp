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
//	int N ;
//
//	while ( cin >> N ){
//		
//		string s = string ( N , '3' ) ;
//		s[0] = '1' , s[ s.size() - 1 ] = '2' ;
//
//		cout << s << endl ;
//
//		for ( int i=0 , j=s.size()-1 ; j > 0 ; i++ , j-- ){
//
//			s[i] = '3' , s[i+1] = '1' ;
//			
//			if ( s[j] != '1' )
//				s[j] = '3' ; 
//			
//			s[j-1] = '2' ;
//				
//			cout << s << endl ;
//
//		}
//	
//	}
//
//return 0 ;
//}