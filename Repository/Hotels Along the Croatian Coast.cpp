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
//	long long N , M , a = 0 , count = 0 , res = 0 ;
//
//	cin >> N >> M ;
//
//	vector < int > hotels ( N ) ;
//
//	for ( int i=0 ; i<N ; i++ )
//		cin >> hotels[i] ;
//
//	for ( int i=0 ; i<N ; ){
//		
//		a += hotels[i] ;
//
//		if ( a > M ){
//			
//			a -= hotels[i] ;
//			res = max ( res , a ) ;
//
//			a -= hotels [ count ++ ] ;
//			continue ;
//		
//		}
//
//		if ( a == M ){
//
//			cout << a << endl ;
//			return 0 ;
//
//		}
//		
//		i ++ ;
//
//	}
//
//	cout << res << endl ;
//
//return 0 ;
//}