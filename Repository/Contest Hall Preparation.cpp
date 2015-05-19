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
//	int T , N , M , count ;
//
//	cin >> T ;
//
//	while ( T -- ){
//	
//		cin >> N >> M ;
//
//		vector < vector < int > > Hall ( N , vector < int > ( M ) ) ;
//		set < int > res ;
//
//		for ( int i=0 ; i<N ; i++ )
//			for ( int j=0 ; j<M ; j++ )
//				cin >> Hall[i][j] ;
//			
//		for ( int i=0 ; i<N ; i++ ){
//
//			for ( int j=0 ; j<M ; j++ ){
//
//				count = 0 ;
//
//				if ( Hall[i][j] != -1 ){
//
//					if ( (i - 1) >= 0 && (j - 1) >= 0 ){
//						if ( Hall [i][j] == Hall[i-1][j-1] )
//							count ++ ;
//					}
//
//					if ( (j - 1) >= 0 ){
//						if ( Hall [i][j] == Hall[i][j-1] )
//							count ++ ;
//					}
//
//					if ( (i + 1) < N && (j - 1) >= 0 ){
//						if ( Hall [i][j] == Hall[i+1][j-1] )
//							count ++ ;
//					}
//
//					if ( (i - 1) >= 0 && (j + 1) < M ){
//						if ( Hall [i][j] == Hall[i-1][j+1] )
//							count ++ ;
//					}
//
//					if ( (j + 1) < M ){
//						if ( Hall [i][j] == Hall[i][j+1] )
//							count ++ ;
//					}
//
//					if ( (i + 1) < N && (j + 1) < M ){
//						if ( Hall [i][j] == Hall[i+1][j+1] )
//							count ++ ;
//					}
//
//					if ( (i - 1) >= 0 ){
//						if ( Hall [i][j] == Hall[i-1][j] )
//							count ++ ;
//					}
//
//					if ( (i + 1) < N ){
//						if ( Hall [i][j] == Hall[i+1][j] )
//							count ++ ;
//					}
//
//					if ( count >= 1 )
//						res.insert ( Hall [i][j] ) ;
//
//				}
//
//			}
//
//		}
//		
//		cout << res.size() << endl ;
//	
//	}
//
//return 0 ;
//}