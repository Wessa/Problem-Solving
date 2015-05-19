//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//
//using namespace std ;
//
//int main (){
//
//	int n1 , n2 , m , swap , x , i = 1 ;
//	bool t1 = 0 , t2 = 0 ;
//
//	while ( cin >> n1 >> n2 >> m && ( n1 != 0 && n2 != 0 && m != 0 ) ){
//	
//		vector <int> T1 ( n1 , -1 ) ;
//		vector <int> T2 ( n2 , -1 ) ;
//
//		t1 = 0 , t2 = 0 ;
//
//		while ( m -- ){
//
//			cin >> x ;
//
//			while ( 1 ){
//				
//				if ( T1[ x % n1 ] != -1 ){
//		
//					swap = T1[ x % n1 ] ;
//					T1[ x % n1 ] = x ;
//					t1 = true ;
//
//					x = swap ;
//
//					if ( T2[ x % n2 ] != -1 ){
//				
//						swap = T2[ x % n2 ] ;
//						T2[ x % n2 ] = x ;
//						t2 = true ;
//
//						x = swap ;
//				
//					}
//					else {
//				
//						T2[ x % n2 ] = x ;
//						t2 = true ;
//						break ;
//				
//					}
//
//				}
//				else {
//			
//					T1[ x % n1 ] = x ;
//					t1 = true ;
//					break ;
//
//				}
//
//			}
//
//		}
//
//		cout << "Case " << i << ":\n" ;
//		
//		if ( t1 ){
//
//			cout << "Table 1\n" ;
//
//			for ( int i=0 ; i<n1 ; i++ ){
//			
//				if ( T1[i] >= 0 )
//					cout << i << ":" << T1[i] << endl ;
//
//			}
//
//		}
//
//		if ( t2 ){
//	
//			cout << "Table 2\n" ;
//
//			for ( int i=0 ; i<n2 ; i++ ){
//
//				if ( T2[i] >= 0 )
//					cout << i << ":" << T2[i] << endl ;
//
//			}
//
//		}
//
//		i ++ ;
//
//	}
//
//return 0 ;
//}