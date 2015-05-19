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
//	int n , sum , rest1 , rest2 ;
//	double a , b ;
//
//	for ( int i=1 ; cin >> n && n >=0 ; i++ ){ 
//
//		sum = 0 , rest1 = 0 , rest2 = 0;
//
//		vector < int > m ( n ) ;
//		vector < int > x ( n ) ;
//		vector < int > y ( n ) ;
//
//		for ( int i=0 ; i<n ; i++ )	
//			cin >> x[i] >> y[i] >> m[i] ;
//		
//		for ( int i=0 ; i<n ; i++ )
//			sum += m[i] , rest1 += m[i]*y[i] , rest2 += m[i]*x[i] ;
//		
//		a = rest2 / double(sum) , b = rest1 / double(sum) ;
//
//		cout << "Case " << i << ": " << fixed << setprecision(2) << a << " " << b << endl ;
//
//	}
//
//return 0 ;
//}