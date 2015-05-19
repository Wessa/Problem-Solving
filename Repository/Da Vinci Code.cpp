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
//unsigned long long num[100] ;
//map < unsigned long long , int > fibo ;
//
//void fib ( ){
//
//	num[0] = 1 , num[1] = 2 ;
//
//	fibo[1] = 0 , fibo[2] = 1 ;
//
//	for ( int i=2 ; i<=46 ; i++ ){
//
//		num[i] = num[i-1] + num[i-2] ;
//		fibo[num[i]] = i ; 
//
//	}
//
//}
//
//int main (){
//
//	unsigned long long int T , N ;
//	string Text ;
//
//	fib() ;
//
//	cin >> T ;
//
//	while ( T -- ){
//	
//		cin >> N ;
//	
//		long long maxi = -1 ;
//		vector < long long > inp (N) ;
//
//		for ( int i=0 ; i<N ; i++ ){
//		
//			cin >> inp[i] ;
//
//			if ( inp[i] > maxi )
//				maxi = inp[i] ;
//
//		}
//
//		maxi = fibo[maxi] ;
//
//		string out ( maxi + 1 , ' ' ) ;
//
//		cin.ignore() ;
//		getline ( cin , Text ) ;
//
//		for ( int i=0 , k=0 ; i<Text.size() && k<N ; i++ ){
//		
//			if ( isupper ( Text[i] ) )
//				out [ fibo[ inp[k++] ] ] = Text[i] ;
//
//		}
//
//		cout << out << endl ;
//
//	}
//
//return 0 ;
//}