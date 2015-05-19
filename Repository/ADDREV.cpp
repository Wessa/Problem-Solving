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
//	int N ; 
//	string num1 , num2 ;
//
//	cin >> N ;
//
//	while ( N -- ){
//
//		string res ;
//		int res1 = 0 , res2 = 0 ;
//	
//		cin >> num1 >> num2 ;
//
//		while ( num1.size() > 1 && num1[num1.size()-1] == '0' )
//			num1.erase ( num1.size() - 1 , 1 ) ;
//
//		while ( num2.size() > 1 && num2[num2.size()-1] == '0' )
//			num2.erase ( num2.size() - 1 , 1 ) ;
//
//		reverse ( num1.begin () , num1.end() ) ;
//		reverse ( num2.begin () , num2.end() ) ;
//
//		istringstream ( num1 ) >> res1 ;
//		istringstream ( num2 ) >> res2 ;
//
//		stringstream ss ;
//		ss << ( res1 + res2 ) ;
//		res = ss.str () ;
//
//		while ( res.size() > 1 && res[res.size()-1] == '0' )
//			res.erase ( res.size() - 1 , 1 ) ;
//
//		reverse ( res.begin() , res.end() ) ;
//
//		cout << res << endl ;
//
//	
//	}
//
//return 0 ;
//}