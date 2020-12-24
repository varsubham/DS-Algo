// trying to code dijkstra
#include <iostream>
#include <queue>
#include <unordered_map>
#include <map>
#include <list>
#include <unordered_set>
using namespace std;

class Graph {
public:
    unordered_map<char, list<pair<char, int>>> um;
    unordered_set<char> us;
    void addEdges(char u, char v, int w) {
        um[u].push_back({ v, w });
        us.insert(u);
        us.insert(v);
    }

    void initialize_q(multimap<int, char>& q, char source_vert, unordered_set<char> vertices) {
        for (char itr : vertices) {
            if (itr == source_vert) {
                q.insert({ 0, itr });
            }
            else {
                q.insert({ INT16_MAX, itr });
            }
        }
    }

    auto searchByVal(multimap<int, char> Q, char val) {

        auto itr = Q.begin();
        while (itr->second != val) {
            itr++;
        }
        return itr;
    }

    multimap<int, char> dijkstra(unordered_set<char> vertices, char source_vert) {
        multimap<int, char> Q;
        // initialize q
        initialize_q(Q, source_vert, vertices);
        // initialize an ordered_map
        multimap<int, char> S;
        while (!Q.empty()) {
            //extract min from Q
            auto itr = Q.begin();
            // delete min from Q

            // union itr with S
            int x = itr->first;
            char y = itr->second;
            S.insert({ x, y });
            Q.erase(itr);
            for (auto ch : um[y]) {
                // relax (itr, ch, w)
                char v = ch.first;
                int w = ch.second;
                //auto itr2 = searchByVal(Q, v);

                // search by val
                auto itr3 = Q.begin();
                while (itr3 != Q.end()) {
                    if (itr3->second == v) {
                        break;
                    }
                    itr3++;
                }
                if (itr3 == Q.end())
                    continue;

                if (itr3->first > w + x) {
                    // updated the value
                    //auto itr2 = searchByVal(Q, v);

                    int new_weight = w + x;
                    char k = itr3->second;
                    Q.erase(itr3);
                    Q.insert({ new_weight, k });
                }

            }

        }
        return S;
    }
};


int main() {
    Graph gp;
    /*gp.addEdges('A', 'B', 10);
    gp.addEdges('A', 'C', 3);
    gp.addEdges('B', 'C', 1);
    gp.addEdges('C', 'B', 4);
    gp.addEdges('B', 'D', 2);
    gp.addEdges('C', 'D', 8);
    gp.addEdges('C', 'E', 2);
    gp.addEdges('E', 'D', 9);
    gp.addEdges('D', 'E', 7);
    */
    gp.addEdges('S', 'A', 4);
    gp.addEdges('S', 'B', 2);
    gp.addEdges('A', 'B', 3);
    gp.addEdges('A', 'C', 5);
    gp.addEdges('A', 'E', 2);
    gp.addEdges('B', 'A', 1);
    gp.addEdges('B', 'D', 1);
    gp.addEdges('C', 'E', 3);
    gp.addEdges('D', 'C', 2);
    gp.addEdges('D', 'F', 1);
    gp.addEdges('E', 'D', 1);
    gp.addEdges('E', 'F', 4);

    multimap<int, char> k = gp.dijkstra(gp.us, 'S');
    for (auto itr : k) {
        cout << itr.second << "-->" << itr.first << endl;
    }
}