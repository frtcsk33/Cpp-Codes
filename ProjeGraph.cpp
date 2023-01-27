#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

class Edge{

    public:
        int DestinationVertexID;
        int weight;

        Edge(){}
        Edge(int destVID, int w){
            DestinationVertexID = destVID;
            weight = w;
        }
        void setEdgeValues(int destVID, int w){
            DestinationVertexID = destVID;
            weight = w;

        }
        void setWeight(int w){
            weight = w;
        }

        int getDestinationVertexID(){
            return DestinationVertexID;

        }
        int getWeight(){
            return weight;
        }
};

class Vertex{
    public: 
        int state_id;
        string state_name;

        list<Edge> edgeList;

        Vertex(){
            state_id = 0;
            state_name = "";
        }
        Vertex(int id, string sname){
            state_id = id;
            state_name = sname;
        }
        int getStateID(){
            return state_id;

        }
        string getStateName(){
            return state_name;

        }
        void setID(int id){
            state_id = id;
        }
        void setStateName(string sname)
        {
            state_name = sname;

        }
        list<Edge> getEdgeList(){
            return edgeList;

        }
        


}; 

class Graph{

    public:
        vector<Vertex> vertices;

        void addVertex(Vertex newVertex)
        {
            bool check = checkIfVertexExistByID(newVertex.getStateID());
            if(check == true){
                cout<<"Vertex with this ID already exist"<<endl;

            }
            else{
                vertices.push_back(newVertex);
                cout<<"New vertex added successfully"<<endl;

            }
        }

        bool checkIfVertexExistByID(int vid){
            bool flag = false;
            for(int i=0; i<vertices.size(); i++){
                if(vertices.at(i).getStateID() == vid){
                    return true;
                }
            }
            return false;
        }

        bool checkIfEdgeExistByID(int fromVertex, int toVertex){
            Vertex v = getVertexByID(fromVertex);
            list < Edge > e;
            e = v.getEdgeList();
            for(auto it = e.begin(); it != e.end(); it++){
                if(it --> getDestinationVertexID() == toVertex){
                    flag = true;
                    return flag;
                    break;
                }
            }
        }




        void addEdgeByID(int fromVertex, int toVertex, int weight)
        {
            bool check1 = checkIfVertexExistByID(fromVertex);
            bool check2 = checkIfVertexExistByID(toVertex);

            if((check1 && check2 == true)){
                bool check3 = checkIfEdgeExistByID(fromVertex, toVertex);
                if(check3 == true){
                    cout<<"Edge beetween  "<<getVertexByID(fromVertex).getStateName() << " ("<< fromVertex<<") and "<< getVertexByID(toVertex).getStateName() << " ("<< fromVertex << ") Already existed"<<; 
                }
                
            } 
        }


         void printGraph(){
             for(int i=0; i<vertices.size(); i++){
                 Vertex temp;
                 temp = vertices.at(i);
               cout<<temp.getStateName()<<"  ("<<temp.getStateID()<<" )  --> ";
                 temp.printEdgeList(); 
            }
        }

};


int main(){

    Graph g;
    string sname;
    int option, id1;
    Vertex v1;

    do {

        cout<<"What opearation do you want to perform?"
        <<"Select option number. enter 0 to exit" <<endl;
        cout<<"1. Add Vertex"<<endl;
        cout<<"2. Update Vertex"<<endl;
        cout<<"3. Delete vertex"<<endl; 
        cout<<"4. Add Edge"<<endl;
        cout<<"5. Update Edge"<<endl;
        cout<<"6. Delete Edge"<<endl;
        cout<<"7. Check if 2 Vertices are Neighbors"<<endl;
        cout<<"8. Print All Neighbors of a Vertex"<<endl;
        cout<<"9. Print Graph"<<endl;
        cout<<"10. Clear screen"<<endl;
        cout<<"0. Exit program"<<endl;

        cin >> option;


        switch(option){

            case 0: 
                break;
            
            case 1:
                
                cout<<"Add Vertex Operation - "<<endl;
                cout<<"enter state id: ";
                cin>>id1;
                cout<<"Enter State Name: ";
                cin>>sname;
                v1.setID(id1);
                v1.setStateName(sname);
                g.addVertex(v1);
                break;
            
            case 2: 
                cout<<"Update Vertex Operation"<<endl;
                break;


            case 3:
                cout<<"Delete Vertex Operation -"<<endl;
                break;
        
            case 4:
                cout<<"Add Edge Operation -"<<endl;
                break;

            case 5:
                cout<<"Update Edge Operation - "<<endl;
                break;

            case 6:
                cout<<"Delete Edge Operation -"<<endl;
                break;

            case 7:
                cout<<"Check if 2 Vertices are Neighbors -"<<endl;
                break;
            case 8:
                cout<<"print All Neighbors of a Vertex- "<<endl;
                break;
            
            case 9:
                cout<<"Print Graph operation"<<endl;
                g.printGraph();
                break;

            default:
                    cout<<"Enter proper option Number"<<endl;
        }
        cout<<endl;

    }while(option != 0);









    scanf(" ");
    return 0;
}