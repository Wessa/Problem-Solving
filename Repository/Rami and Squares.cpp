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
//	int T , N , ai , res ;
//
//	cin >> T ;
//
//	while ( T -- ){
//	
//		cin >> N ;
//
//		map < int , int > sticks ;
//		map < int , int > :: iterator it ;
//
//		res = 0 ;
//
//		while ( N -- )
//			cin >> ai , sticks[ai] ++ ;
//		
//		for ( it = sticks.begin() ; it != sticks.end() ; it ++ )
//			res += ( it -> second ) % 4 ;
//
//		cout << res << endl ;
//	
//	}
//
//return 0 ;
//}