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
//	int T , res ;
//	string a , b ;
//
//	cin >> T ;
//
//	while ( T -- ){
//		
//		cin >> a >> b ;
//
//		res = 0 ;
//
//		if ( a.size() <= b.size() ){
//		
//			for ( int i=0 ; i<a.size() ; ){
//			
//				if ( b.find ( a[i] ) != string :: npos )
//					b.erase ( b.find ( a[i] ) , 1 ) , a.erase ( i , 1 )  ;
//
//				else 
//					i ++ ;
//
//			}
//		
//		}
//
//		else {
//		
//			for ( int i=0 ; i<b.size() ; ){
//			
//				if ( a.find ( b[i] ) != string :: npos )
//					a.erase ( a.find ( b[i] ) , 1 ) , b.erase ( i , 1 ) ;
//			
//				else 
//					i ++ ;
//
//			}
//		
//		}
//
//		cout << a.size() + b.size() << endl ;
//
//	}
//
//return 0 ;
//}