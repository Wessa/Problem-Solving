//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//
//using namespace std ;
//
//int main (){
//
//	int n , k , count = 0 ;
//	string num , allDigits ;
//
//	cin >> n >> k ;
//
//	for ( int i=0 ; i<=k ; i++ )
//		allDigits += char ( i + '0' ) ;
//	
//	while ( n -- ){
//	
//		cin >> num ;
//
//		string num2 ;
//
//		for ( int i=0 ; i<num.size() ; i++ ){
//		
//			if ( num2.find( num[i] ) == string::npos )
//				num2 += num[i] ;
//
//		}
//
//		sort ( num2.begin() , num2.end() ) ;
//
//		if ( num2.find( allDigits ) != string::npos )
//			count ++ ;
//	
//	}
//
//	cout << count << endl ;
//
//return 0 ;
//}