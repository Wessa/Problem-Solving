//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//#include <queue>
//
//using namespace std ;
//
//int main (){
//
//	int T , n , m , ai , res ; 
//
//	cin >> T ;
//
//	while ( T -- ){
//	
//		cin >> n >> m ;
//
//		queue < pair < int , int > > children ;
//
//		for ( int i=1 ; i<=n ; i++ )
//			cin >> ai , children.push ( make_pair ( i , ai ) ) ;
//
//		while ( !children.empty() ){
//		
//			if ( children.front().second > m )
//				children.front().second -= m ,children.push ( make_pair ( children.front().first , children.front().second ) ) , children.pop() ;
//
//			else
//				res = children.front().first , children.pop() ;
//
//		}
//
//		cout << res << endl ;
//
//	}
//
//return 0 ;
//}