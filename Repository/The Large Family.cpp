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
//double round ( double num , int x ){
//
//	double res = x ;
//
//	if ( num >= ( x + 0.5 ) )
//		return res + 0.5 ;
//
//	else if ( num < ( x + 0.5 ) )
//		return res ;
//
//}
//
//int main (){
//
//	double G ;
//	double goat = 0 , dad1 , dad = 0 , mum = 0 , children = 0 ;
//	
//	while ( cin >> G && G ){
//
//		bool d , d1 , m ;
//
//		goat = 0 , dad = 0 , mum = 0 , children = 0 ;
//	
//		children = ( (G + 1) / 7.0 ) ;
//
//		children = round ( children , int ( children ) ) ;
//
//		dad  = children ;
//		dad1 = children - 0.5 ;
//		mum  = children + 0.5 ;
//
//		d  = ( 2*dad  + children*5 <= G ) ;
//		d1 = ( 2*dad1 + children*5 <= G ) ;
//		m  = ( 2*mum  + children*5 <= G ) ;
//		
//		if ( d && m && d1 )
//			dad = mum = max ( dad , max ( mum , dad1 ) ) ;
//
//		else if ( d && m )
//			mum = dad = max ( dad , mum ) ;
//
//		else if ( m && d1 )
//			dad = mum = max ( dad1 , mum ) ;
//
//		else if ( d && d1 )
//			dad = mum = max ( dad1 , dad ) ;
//
//		else if ( m )
//			dad = mum ;
//
//		else if ( d1 )
//			dad = mum = dad1 ;
//
//		else if ( d )
//			mum = dad ;
//
//		goat = G - ( 2*dad + children*5 ) ;
//
//		cout << fixed << setprecision(1) << goat << " " << dad << " " << mum << " " << children << endl ;
//	
//	}
//
//return 0 ;
//}