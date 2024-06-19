import java.util.*;

class Edge {
    int vertex;
    int weight;

    Edge(int vertex, int weight) {
        this.vertex = vertex;
        this.weight = weight;
    }
}

public class primsalgo {
   public static void primMST(int[][] graph) {
        int V = graph.length; // Number of vertices in the graph
        boolean[] inMST = new boolean[V]; // To track vertices included in MST
        int[] key = new int[V]; // To store minimum weights to connect each vertex to MST
        int[] parent = new int[V]; // To store MST structure

        // Initialize keys as infinite and inMST[] as false
        Arrays.fill(key, Integer.MAX_VALUE);
        Arrays.fill(inMST, false);

        // Priority queue to pick minimum weight edge
        PriorityQueue<Edge> pq = new PriorityQueue<>(Comparator.comparingInt(e -> e.weight));

        key[0] = 0;
        parent[0] = -1; // First node is always the root of MST
        pq.add(new Edge(0, key[0]));

        while (!pq.isEmpty()) {
            int u = pq.poll().vertex;
            inMST[u] = true;

            // Update the key values and parent index of the adjacent vertices
            for (int v = 0; v < V; v++) {
                    if (graph[u][v] != 0 && !inMST[v] && graph[u][v] < key[v]) {
                    key[v] = graph[u][v];
                    pq.add(new Edge(v, key[v]));
                    parent[v] = u;
                }
            }
        }

        // Print the constructed MST
        printMST(parent, graph);
    }

    // Function to print the constructed MST
    public static void printMST(int[] parent, int[][] graph) {
        System.out.println("Edge \tWeight");
        for (int i = 1; i < graph.length; i++) {
            System.out.println(parent[i] + " - " + i + "\t" + graph[i][parent[i]]);
        }
    }

    public static void main(String[] args) {
        // Example graph represented as an adjacency matrix
        int[][] graph = {
            {0, 2, 0, 6, 0},
            {2, 0, 3, 8, 5},
            {0, 3, 0, 0, 7},
            {6, 8, 0, 0, 9},
            {0, 5, 7, 9, 0}
        };

        // Run Prim's algorithm to find MST
        primMST(graph);
    }
}
