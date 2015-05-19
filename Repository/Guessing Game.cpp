//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <iomanip>
//#include <set>
//#include <sstream>
//#include <math.h>
//#include <cmath>
//#include <stdio.h>
//
//using namespace std ;
//
//int main (){
//
//	int guess , maxi = 11 , mini = 0 ;
//	string response1 , response2 ;
//
//	while ( cin >> guess && guess ){
//		
//		cin >> response1 >> response2 ;
//
//		if ( response2 == "high" )
//			maxi = min ( maxi , guess ) ;
//
//		else if ( response2 == "low" )
//			mini = max ( mini , guess ) ;
//
//		else if ( response2 == "on" && ( guess > mini ) && ( guess < maxi ) )
//			cout << "Stan may be honest\n" , maxi = 11 , mini = 0 ;
//
//		else 
//			cout << "Stan is dishonest\n" , maxi = 11 , mini = 0 ;
//
//	}
//
//return 0 ;
//}