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
//	int N , M , t , res ;
//
//	while ( cin >> N >> M && N != 0 && M != 0 ){
//	
//		res = 0 ;
//
//		map < int , int > tickets ;
//		map < int , int > :: iterator it ;
//
//		while ( M -- ){
//
//			cin >> t ;
//
//			tickets [ t ] ++ ; 
//		}
//
//		for ( it = tickets.begin() ; it != tickets.end() ; it ++ )
//		
//			if ( it -> second > 1 )
//				res ++ ;
//		
//		cout << res << endl ;
//
//	}
//
//	
//
//return 0 ;
//}