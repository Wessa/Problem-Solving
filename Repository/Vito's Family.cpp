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
//	int T , N ;
//
//	cin >> T ;
//
//	while ( T -- ){
//		
//		cin >> N ;
//
//		int temp1 , temp2 , res = 0 , dis = 0 ;
//
//		vector <int> rel ( N ) ;
//
//		for ( int i=0 ; i<N ; i++ )
//			cin >> rel [i] ;
//
//		sort ( rel.begin() , rel.end() ) ;
//
//		if ( N % 2 == 0 ){
//			
//			temp1 = rel [ N/2 ] ;
//			temp2 = rel [ (N/2) - 1 ] ;
//
//			for ( int i=0 ; i<N ; i++ ){
//				
//				dis += abs ( rel[i] - temp1 ) ; 
//				res += abs ( rel[i] - temp2 ) ; 
//
//			}
//
//			res = min ( res , dis ) ;
//		
//		}
//
//		else {
//		
//			temp2 = rel [ N/2 ] ;
//
//			for ( int i=0 ; i<N ; i++ )
//				res += abs ( rel[i] - temp2 ) ; 
//		
//		}
//
//		cout << res << endl ;
//	
//	}
//
//return 0 ;
//}