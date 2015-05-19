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
//	int T , N , num , res = 1000001 ;
//
//	cin >> T ;
//
//	while ( T -- ){
//	
//		res = 1000001 ;
//
//		cin >> N ;
//
//		vector <int> m1 ;
//		for ( int i=0 ; i<N ; i++ )
//			cin >> num , m1.push_back(num) ;
//
//		cin >> N ;
//
//		vector <int> m2 ;
//		for ( int i=0 ; i<N ; i++ )
//			cin >> num , m2.push_back(num) ;
//
//		for ( int i=0 ; i<m1.size() ; i++ ){
//		
//			for ( int j=0 ; j<m2.size() ; j++ ){
//			
//				res = min ( res , abs ( m1[i] - m2[j] ) ) ;
//			
//			}
//
//		}
//	
//		cout << res << endl ;
//
//	}
//
//return 0 ;
//}