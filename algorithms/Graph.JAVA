import java.util.*;

public class Graph {
    private Map<Integer, List<Integer>> adjacencyList;

    public Graph() {
        adjacencyList = new HashMap<>();
    }

    public void addEdge(int source, int destination) {
        adjacencyList.computeIfAbsent(source, k -> new ArrayList<>()).add(destination);
        adjacencyList.computeIfAbsent(destination, k -> new ArrayList<>()).add(source);
    }

    public void dfsRecursive(int start) {
        Set<Integer> visited = new HashSet<>();
        dfsRecursiveHelper(start, visited);
    }

    private void dfsRecursiveHelper(int node, Set<Integer> visited) {
        visited.add(node);
        System.out.print(node + " "); // Process the node
        for (int neighbor : adjacencyList.getOrDefault(node, new ArrayList<>())) {
            if (!visited.contains(neighbor)) {
                dfsRecursiveHelper(neighbor, visited);
            }
        }
    }

    public static void main(String[] args) {
        Graph graph = new Graph();
        graph.addEdge(0, 1);
        graph.addEdge(0, 2);
        graph.addEdge(1, 2);
        graph.addEdge(2, 0);
        graph.addEdge(2, 3);
        graph.addEdge(3, 3);

        System.out.println("DFS Recursive:");
        graph.dfsRecursive(2);
    }
}
