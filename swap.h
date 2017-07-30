#include<iostream>



namespace TJ{

	template<typename Comparable>	
	class Myclass{
	
	public:
		void swapMyclass(const Comparable &c){
			
			
			//对于Myclass来说高效的swap操作
			
		}	
		
	private:
		
	};
	
	template<typename Comparable>
	void swap(Myclass<Comparable> &lhs,
			Myclass<Comparable> &rhs){
		
		lhs.swapMyclass(rhs);
	}
	
	
	
}
Myclass<int > m1;
Myclass<int > m2;
using std::swap;
swap(m1,m2);

