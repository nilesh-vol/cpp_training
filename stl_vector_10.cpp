// Main function of the C++ program.

#include <iostream>
#include <vector>
using namespace std;
class matrix2D {
    private:
        vector<vector<int> > elements;

    public:
        matrix2D(size_t m, size_t n) : elements(m, vector<int>(n)){}
        
		int &operator()(size_t i, size_t j) 
		{
		    return elements[i][j];
		 }
        
		size_t nrows() {
		 return elements.size();
		}
        
		size_t ncols() { 
		return elements[0].size();
		 }
};

int main() {
    matrix2D M(5, 5);
    
    for (size_t i = 0; i < M.nrows(); i++) {
    	
        for (size_t j = 0; j < M.ncols(); j++) {
        	
             M(i, j) = i * i + j * j;
        }
    }
    
    for (size_t i = 0; i < M.nrows(); i++){
    	
        for (size_t j = 0; j < M.ncols(); j++) {
        	
            cout << M(i,j) << ' ';
        }
        cout << endl;
     }
}
