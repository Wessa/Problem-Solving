//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//#include <math.h>
//#include <stdio.h>
//
//using namespace std ;
//
//int main (){
//
//	int C ;
//	double N ;
//
//	cin >> C ;
//
//	while ( C -- ){
//
//		cin >> N ;
//
//		double Avg = 0 , Percentage = 0 ;
//		vector < int > Grades ( N ) ;
//
//		for ( int i=0 ; i<N ; i++ )
//			cin >> Grades[i] , Avg += Grades[i] ;
//
//		Avg /= N ;
//
//		for ( int i=0 ; i<N ; i++ ){
//			
//			if ( Grades[i] > Avg )
//				Percentage += 1 ;
//		
//		}
//
//		Percentage = ( Percentage * 100 ) / N ;
//
//		cout << fixed << setprecision(3) << Percentage << '%' << endl ;
//
//	}
//
//return 0 ;
//}