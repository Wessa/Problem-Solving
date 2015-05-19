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
//	int T , count = 0 ;
//	string inp ;
//
//	cin >> T ;
//
//	while ( T -- ){
//
//		string res ;
//		res = "." ;
//		count = 0 ;
//
//		cin >> inp ;
//	
//		for ( int i=0 ; i<inp.size() ; i++ ){
//
//			if ( inp[i] != res[ res.size()-1 ] ){
//
//				stringstream ss ;
//				ss << count ;
//
//				res += ss.str() , count = 1 , res += inp[i] ;
//
//			}
//
//			else 
//				count ++ ;
//
//		}
//
//		stringstream ss ;
//		ss << count ;
//
//		res +=  ss.str() ;
//
//		res.erase ( 0 , 2 ) ;
//
//		cout << res << endl ;
//
//	}
//
//return 0 ;
//}