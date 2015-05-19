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
//	int num , sum ;
//
//	while ( cin >> num && num != -1 ){
//		
//		sum = 0 ;
//		vector < int > summation ;
//
//		for ( int i=1 ; i<num ; i++ ){
//		
//			if ( num % i == 0 )
//				sum += i , summation.push_back( i ) ;
//		
//		}
//
//		if ( sum == num ){
//		
//			cout << num << " = " ;
//
//			for ( int i=0 ; i<summation.size()-1 ; i++ )
//				cout << summation[i] << " + " ;
//
//			cout << summation[summation.size()-1] << endl ;
//
//		}
//		else 
//			cout << num << " is NOT perfect." << endl ;
//
//	}
//
//return 0 ;
//}