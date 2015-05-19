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
//	int n , d , res = 0 , count = 0 ;
//
//	cin >> n >> d ;
//
//	vector < int > songs ( n ) ;
//
//	for ( int i=0 ; i<n ; i++ )
//		cin >> songs[i] , count += songs[i] ;
//
//	if ( d < ( count + (n-1)*10 ) ){
//
//		cout << "-1" << endl ;
//		return 0 ;
//
//	}
//
//	else {
//
//		d -= ( count + (n-1)*10 ) ;
//		res += (n-1)*2 ;
//		res += d / 5 ;
//
//	}
//
//	cout << res << endl ;
//
//return 0 ;
//}