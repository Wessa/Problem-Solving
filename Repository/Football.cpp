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
//	int N , G , S , R , pts ;
//
//	while ( cin >> N >> G ){
//	
//		vector < int > D , L1 , L2 ;
//
//		pts = 0 ;
//
//		while ( N -- ){
//		
//			cin >> S >> R ;
//
//			if ( S == R )
//				D.push_back ( 1 ) ;
//
//			else if ( S < R )
//				L1.push_back ( (R - S) + 1 ) ;
//
//			else 
//				pts += 3 ;
//
//		}
//
//		sort ( L1.begin() , L1.end() ) ;
//
//		for ( int i=0 ; i<D.size() ; i++ ){
//			
//			if ( G >= 1 )
//				pts += 3 , G -= 1 ;
//
//			else 
//				pts += 1 ;
//
//		}
//
//		for ( int i=0 ; i<L1.size() ; i++ ){
//
//			if ( G > L1[i] - 1 )
//				pts += 3 , G -= L1[i] ;
//
//			else if ( G == L1[i] - 1 )
//				pts += 1 , G -= L1[i] ;
//
//		}
//
//		cout << pts << endl ;
//		
//	}
//
//return 0 ;
//}