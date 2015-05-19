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
//	int n , m , g ;
//	vector < int > groups ;
//
//	cin >> n >> m ; 
//
//	cin >> g ;
//	groups.push_back ( g ) ;
//
//	for ( int i=1 ; i<n ; i++ ){
//	
//		cin >> g ;
//
//		if ( g + groups[ groups.size() - 1 ] <= m )
//			groups[ groups.size() - 1 ] += g ;
//
//		else 
//			groups.push_back ( g ) ;
//	
//	}
//
//	cout << groups.size() << endl ;
//
//return 0 ;
//}