//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//#include <stdio.h>
//
//using namespace std ;
//
//int main (){
//
//    int T , N ;
//	long long int res , res1 , res2 , count , temp ;
//
//    cin >> T ;
//
//    while ( T -- ){
//    
//        cin >> N ;
//
//		res2 = 0 , res1 = 0 , count = 0 , temp = 0 , res = 1000000001 ;
//
//        vector < int > L ( N ) ;
//
//        for ( int i=0 ; i<N ; i++ )
//            cin >> L[i] , count += L[i] ;
//
//		for ( int i=0 ; i<N ; i++ ){
//
//			res1 = 0 , res2 = 0 ; 
//
//			temp += L[i] ;
//
//			if ( i != N - 1 ){
//
//				res1 = ( temp - L[i] )*2 + ( count - temp ) ;
//				res2 = ( temp - L[i] ) + ( count - temp )*2 ;
//				res = min ( res , min(res1,res2) ) ;
//
//			}
//
//			else 
//				res1 += ( temp - L[i] ) , res = min ( res , res1 ) ;
//		
//		}
//
//		cout << res << endl ;
//
//    }
//
//return 0 ;
//}