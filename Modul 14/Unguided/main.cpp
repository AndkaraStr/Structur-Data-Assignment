#include "graph.h"

int main() {
    Graph G;
    CreateGraph(G);

    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');

    adrNode A = G.first;
    adrNode B = A->Next;
    adrNode C = B->Next;
    adrNode D = C->Next;

    ConnectNode(A, B);
    ConnectNode(A, C);
    ConnectNode(B, D);

    PrintInfoGraph(G);

    cout << "DFS: ";
    PrintDFS(G, A);
    cout << endl;

    adrNode R = G.first;
    while (R != NULL) {
        R->visited = 0;
        R = R->Next;
    }
    cout << "BFS: ";
    PrintBFS(G, A);
    cout << endl;

    return 0;
}
