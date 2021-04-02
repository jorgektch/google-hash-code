#include <bits/stdc++.h>
using namespace std;
// Class of the node
class Node {
public:
    int vertexNumber;
    vector<pair<int, int>> children;
    Node(int vertexNumber){
        this->vertexNumber = vertexNumber;
    }
    void add_child(int vNumber, int length){
        pair<int, int> p;
        p.first = vNumber;
        p.second = length;
        children.push_back(p);
    }
};
int main(){
    int d; cin >> d; // Simulation duration
    int i; cin >> i; // Intersections
    int s; cin >> s; // Number of streets
    int v; cin >> v; // Number of cars
    int f; cin >> f; // Bonus
    map<string, vector<int>> streets_b_e_l;
    map<int, vector<int>> insersections;
    for(int street=0; i<s; i++){
        int b, e; cin >> b, e;
        string name; cin >> name;
        int l; cin >> l;
        vector<int> vector_b_e_l = {b,e,l};
        streets_b_e_l[name] = vector_b_e_l;
        vector<int> intersection;
        insersections[e].push_back(b);
    }
    
    /*
    for(int vehicle=0; vehicle<v; vehicle++){
        int p; cin >> p; // Number of streets for the vehicle
        for(int j=0; j<p; j++){

        }
    }
    */
    for (auto it = insersections.begin(); it != insersections.end(); it++){
        cout << it->first << "\n";
        for (int i=0; i<=it->second.size(); i++){
            cout << element.size()
            cout << element << " " << 2 << "\n";
        }
    }
    return 0;
}