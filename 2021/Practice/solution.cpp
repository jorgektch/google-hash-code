#include <bits/stdc++.h>
using namespace std;
vector<int> obtener_grupos(int m,int t2,int t3,int t4){
    int m_copia = m;
    int grupos_4 = 0, grupos_3 = 0, grupos_2 = 0;
    while(4<m_copia && grupos_4<t4){
        grupos_4 ++;
        m_copia -= 4;
    }
    while(3<m_copia && grupos_3<t3){
        grupos_3 ++;
        m_copia -= 3;
    }
    while(2<m_copia && grupos_2<t2){
        grupos_2 ++;
        m_copia -= 2;
    }
    return {grupos_2, grupos_3, grupos_4};
}
void asignar_pizzas(vector<int> grupos_escogidos, vector<vector<string>> pizzas, int m){
    // map<int, int> cantidad_
    int pos = 0;
    cout << accumulate(grupos_escogidos.begin(), grupos_escogidos.end(), 0) <<"\n";
    for(int i=0; i<grupos_escogidos.size(); i++){
        
        for(int j=0; j<grupos_escogidos[i]; j++){
            cout << i+2 << " ";
            int count = 0;
            while(count<(i+2)){
                cout << pos << " ";
                count++;
                pos++;
            }
            cout << "\n";
        }
        
    }
}
int main(int argc, char* argv[]){
    int m, t2, t3, t4;
    cin >> m >> t2 >> t3 >> t4;
    int i; vector<vector<string>> pizzas;
    for(int p=0; p<m; p++){
        int num_ingre; cin >> num_ingre;
        vector<string> pizza;
        for(int i=0; i<num_ingre; i++){
            string ingre;
            cin >> ingre;
            pizza.push_back(ingre);
        }
        pizzas.push_back(pizza);
    }
    vector<int> grupos_escogidos = obtener_grupos(m, t2, t3, t4);
    /*
    for(auto elemento: grupos_escogidos){
        cout << elemento << " ";
    }
    */
    asignar_pizzas(grupos_escogidos, pizzas, m);
    /*
    for(int i=0; i<pizzas.size(); i++){
        for(int j=0; j<pizzas[i].size(); j++){
            cout << pizzas[i][j] << " ";
        }
        cout << "\n";
    }
    */
    return 0;
}