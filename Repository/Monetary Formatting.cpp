//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std ;
//
//int main (){
//
//	string num1 , num2 ;
//
//	while ( cin >> num1 >> num2 ){
//
//		string res ;
//
//		int i = num1.size() - 1 , j = num1.size() - 1 , check = 0 ;
//
//		while ( i >= 0 ){
//			
//			check = 0 ;
//
//			while ( check < 3 && j >= 0 ){
//			
//				res = num1[j] + res ;
//				j -- , check ++ ;
//
//			}
//
//			res = ',' + res ;
//
//			i = j ;
//		}
//
//		res[0] = '$' ;
//
//		if ( num2.size() == 1 )
//			res += ".0" + num2 ;
//
//		else 
//			res += "." + num2 ;
//
//		cout << res << endl ;
//	
//	}
//
//return 0 ;
//}