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
//	int n , res = 21 ;
//
//	cin >> n ;
//
//	vector < string > phones ( n ) ;
//
//	cin >> phones[0] ;
//
//	for ( int i=1 ; i<n ; i++ ){
//
//		cin >> phones[i] ;
//
//		for ( int j=0 ; j<phones[0].size() ; j++ ){
//			
//			if ( phones[i][j] != phones[0][j] )
//				res = min ( res , j ) ;
//		
//		}
//
//	}
//
//	cout << res << endl ;
//
//return 0 ;
//}