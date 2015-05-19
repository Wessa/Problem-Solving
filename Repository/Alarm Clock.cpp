//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <sstream>
//#include <map>
//#include <algorithm>
//#include <iostream>
//
//using namespace std ;
//
//int main(){
//
//	int H1 , M1 , H2 , M2 , res ;
//
//	while ( cin >> H1 >> M1 >> H2 >> M2 ){
//	
//		if ( H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0 )
//			break ;
//
//		res = 0 ;
//
//		if ( H1 < H2 ){
//		
//			res += ( H2 - H1 ) * 60 ;
//
//			if ( M1 <= M2 )
//				res += abs( M2 - M1 ) ;
//
//			else 
//				res -= abs( M2 - M1 ) ;
//		
//		}
//
//		else if ( H1 > H2 ){
//		
//			res += ( (H2 + 24) - H1 ) * 60 ;
//
//			if ( M1 <= M2 )
//				res += abs( M2 - M1 ) ;
//
//			else 
//				res -= abs( M2 - M1 ) ;
//		
//		}
//
//		else {
//		
//			if ( M1 <= M2 )
//				res += abs( M2 - M1 ) ;
//
//			else 
//				res = 60*24 - abs( M2 - M1 ) ;
//		
//		}
//
//		cout << res << endl ;
//
//	}
//
//return 0 ;
//}