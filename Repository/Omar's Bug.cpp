//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <cmath>
//
//using namespace std ;
//
//int main (){
//
//	int T , N , X , Y ;
//
//	cin >> T ;
//
//	while ( T -- ){
//	
//		cin >> N >> X >> Y ;
//	
//		vector < int > res ( N ) ;
//
//		if ( Y == 1 ){
//		
//			for ( int i=1 , j=0 ; j<N ; j++ ){
//				
//				if ( i == X ){
//				
//					res[j] = ++ i , i ++ ;
//
//				}
//				else 
//					res[j] = i , i ++ ;
//			
//			}
//
//		}
//		else {
//		
//			for ( int i=1 , j=0 ; j<N ; j++ ){
//			
//				if ( j == N - 1 && i < X )
//					res[j] = X ;
//
//				else 
//					res[j] = i++ ;
//			
//			}
//		
//		}
//
//		for ( int j=0 ; j<N ; j++ ){
//
//			cout << res[j] ;
//
//			if ( j < N - 1 )
//				cout << " " ;
//
//		}
//
//		cout << endl ;
//
//	}
//
//return 0 ;
//}