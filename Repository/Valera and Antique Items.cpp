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
//	int n , v , number , amount , mini = 1000001 , count = 0 ;
//	vector < int > res ;
//
//	cin >> n >> v ;
//
//	for ( int i=1 ; i<=n ; i++ ){
//		
//		mini = 1000001 ;
//
//		cin >> number ;
//
//		while ( number -- )
//			cin >> amount , mini = min ( mini , amount ) ;
//
//		if ( v > mini )
//			count ++ , res.push_back ( i ) ;
//	
//	}
//
//	cout << count << endl ;
//
//	if ( count ){
//
//		for ( int i=0 ; i<res.size() ; i++ )
//			cout << res[i] << " " ;
//
//		cout << endl ;
//
//	}
//
//return 0 ;
//}