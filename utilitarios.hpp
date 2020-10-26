
#include <iostream>

using namespace std;

class utilitarios{
	private:
	
		int id = 1000000;
		
	public:
		
		utilitarios(){
		}
		
		int getId(){
			return id;
		}
		
		int generaID(){
			int res = getId();
			id++;
			return res;
		}
		
		int len(char* name){
			int res = 0;
			while(*name){
				res++;
				*name++;
			}
			return res;
		}
		
		bool isSame(char* name1, char* name2){
			if(this->len(name1) == this->len(name2)){
				while(*name1){
					if(!(*name1 == *name2)){
						return false;
					}
					*name1++;*name2++;
				}
				return true;
			}else{
				return false;
			}
		}
};