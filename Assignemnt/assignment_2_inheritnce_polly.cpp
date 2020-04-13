#include <iostream>
using namespace std;

class Weapon{
    
	public:
		int strength;
        char type;
        int modified;
       
        void SetPower(int power){
        	strength = power;
        	cout << "power " << strength << "\n";
		}
        virtual int return_strength(){
            
		}
        virtual char return_type(){
		}
};

class Rock : public Weapon{
	
   public:
        bool battle(Weapon w){
		    cout << "Rock power " << strength << "\n";
		  
		    modified = strength/2;
		    w.modified = w.strength*2;
		    
		    if(modified > w.modified){
		    	return true;
			}
			else{
				return false;
			}
	    }
	
	    Rock(){
	  	    type = 'R';
	  	    cout << "type " << type << "\n";
	    }
		
		int return_strength(){
			return strength;
		}
		
		char return_type(){
			return type;
		}
};

class Paper : public Weapon{
	
   public:
        bool battle(Weapon w){
		    cout << "Paper power " << strength << "\n";
		  
		    modified = strength/2;
		    w.modified = w.strength*2;
		    
		    if(modified > w.modified){
		    	return true;
			}
			else{
				return false;
			}
    	}
    	
        Paper(){
	  	    type = 'P';
	  	    cout << "type " << type << "\n";
	    }
	    
		int return_strength(){
			return strength;
		}
		
		char return_type(){
			return type;
		}
};

class Scissor : public Weapon{
	
   public:
        bool battle(Weapon w){
		  cout << "Scissor power " << strength << "\n";
		  
		  modified = strength/2;
		  w.modified = w.strength*2;
		    
		  if(modified > w.modified){
	          return true;
		  }
		  else{
		      return false;
		  }
    	}
   	   
	    Scissor(){
	        type = 'S';;
	        cout << "type " << type << "\n";
	    }
		
		int return_strength(){
			return strength;
		}
		
		char return_type(){
			return type;
		}
       	
};

int main(){
	int pow;
    Rock r;
    cout <<"Enter Rock Power ";
    cin >> pow; 
    r.SetPower(pow);
    
	Paper p;
	cout <<"Enter Paper Power ";
    cin >> pow;
	p.SetPower(pow);
	
	Scissor s;
	
	cout <<"Enter Scissor Power ";
    cin >> pow;
	s.SetPower(pow);

	cout << r.battle(p) << p.battle(s) << s.battle(r) << endl;
	return 0;
}
