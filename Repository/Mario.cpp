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
//	int T , N ;
//
//	cin >> T ;
//
//	for ( int i=0 ; i<T ; i++ ){
//	
//		int low = 0 , high = 0 ;
//
//		cin >> N ;
//
//		vector <int> walls ( N ) ;
//		for ( int j=0 ; j<N ; j++ )
//			cin >> walls[j] ;
//
//		for ( int j=0 ; j<N-1 ; j++ ){
//			
//			if ( walls[j+1] > walls[j] )
//				high ++ ;
//
//			else if ( walls[j+1] < walls[j] )
//				low ++ ;
//		
//		}
//
//		cout << "Case " << i+1 << ": " << high << " " << low << endl ;
//	
//	}
//
//return 0 ;
//}