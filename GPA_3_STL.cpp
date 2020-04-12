#include <iostream>
#include <list>
using namespace std;

//vector<vector<pair<int, int>>> adjList(5);
int len; 

class SafeMap
{

 
	    int NumOfNodes;
      
        list<int> *adjList; // Pointer to an array containing adjacency lists
        
    public:    
	    SafeMap(int num_nodes){
	    	NumOfNodes = num_nodes;
	    	adjList = new list<int> [NumOfNodes];
	    	//adjList.resize(num_nodes);
		}
	
		addSafeRoute(int src, int dest){
			
			//edges.push_back({src, dest, 1});
			adjList[src].push_back(dest);
		    //adjList[src].push_back(make_pair(dest, 1));

		}
		
       // A BFS based function to check whether d is reachable from s.
        bool isReachable(int s, int d)
       {
           if (s == d)
               return true;
 
            // Mark all the vertices as not visited
            bool *visited = new bool[NumOfNodes];
            
            for (int i = 0; i < NumOfNodes; i++)
                visited[i] = false;
 
           // Create a queue
           list<int> queue;
 
            // Mark the current node as visited
            visited[s] = true;
            queue.push_back(s);
 
            // it will be used to get all adjacent vertices of a vertex
           
 
            while (!queue.empty())
            {
                // Dequeue a vertex from queue and print it
                s = queue.front();
                queue.pop_front();
                len = 0;
                
               for ( list<int>::iterator i = adjList[s].begin(); i != adjList[s].end(); ++i)
               {
               	    
                      // If this adjacent node is the destination node, then return true
                    len++;
                    if (*i == d){
                    	return true;
					}
                        

                    if (!visited[*i])
                    {
                        visited[*i] = true;
                        queue.push_back(*i);
                    }
               }
           }
 
        return false;
      }		
};

int main()
{
	// construct graph
    SafeMap g(4);

    g.addSafeRoute(0, 1);
    g.addSafeRoute(0, 2);
    g.addSafeRoute(1, 2);
    g.addSafeRoute(2, 0);
    g.addSafeRoute(2, 3);
    
    int s, d;
    while(1){
    	cin >> s >> d;
        if (g.isReachable(s, d)){
        	cout << "\nThere is a Safe Path from " << s << " to " << d << " and path length is " << len << "\n";
		}       
        else{
        	cout << "\nThere is no Safe Path from " << s << " to " << d << "\n";
		}
           
	}

	return 0;
}
