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
//	long long int n , d ;
//	int res = 0 ;
//
//	cin >> n >> d ;
//
//	vector < long long > soldiers ( n ) ;
//
//	for ( int i=0 ; i<n ; i ++ )
//		cin >> soldiers[i] ;
//	
//	for ( int i=0 ; i<n ; i++ ){
//		
//		for ( int j=0 ; j<n ; j++ ){
//		
//			if ( abs ( soldiers[i] - soldiers[j] ) <= d && i != j )
//				res ++ ;
//		
//		}
//	
//	}
//
//	cout << res << endl ;
//
//return 0 ;
//}