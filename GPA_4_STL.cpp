#include <iostream>
#include <vector>
using namespace std;

int idx = -1;

class Casino{

	public:
		int N;
	    int W;
		Casino(int N, int W){
			this->N = N;
			this->W =W;
		}
};

bool isWin(int i){
	bool status;
	cout << "set win status for play " << i+1 <<"\n";
	cin >> status;
	return status;
//	return 0 + (rand() % (1 - 0 + 1)) == 1;
}

void royale(int N, int W, vector<int> &money, bool &flag)
{
	int count = 0;
	
    for(int i=0; i < N; i++)
    {
    	bool win = isWin(i);
    	
    	if(win == true){
    		money[i] = money[i] + W;
		}
		else{
		    money[i] = money[i] -1;
		}
	   	
		if(money[i] > 0){
		 	
		 	count++;
		 	idx = i+1;
		}	
	}

    if(count == 1)
	{
		flag = true;
		
	}	
	
}

int main()
{
	unsigned int N;
	unsigned int W;
	unsigned int m;
	bool flag = false;
	unsigned int round = 0;
	
	cout << "Enter number of player and Win value \n";
	cin >> N >> W;
	
    Casino c(N,W);
    
    vector<int> money;
    
    for(int i=0; i<N; i++){
    	cout << "Enter Money for player " << i+1 << "\n";
    	cin >> m;
    	money.push_back(m); 
	}
	
	while(1){
		round++;
	    royale(c.N, c.W , money, flag);
	    if(flag == true){
	    	cout << "The game ends after round " << round << " since all except player " << idx << " have 0\n";
	    	break;
		}
    }
    
    
    
	return 0;
}


