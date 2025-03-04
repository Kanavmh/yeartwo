public class Graph {
    public static void main(String[] args) {
        int n = 8;
        int[][] edges = {
            {0, 1}, {0, 2}, {1, 3}, {2, 3}, {3, 4}, {4, 5}, {4, 6}, {5, 7}, {6, 7}
        };
        int[][] graph = buildGraph(edges,n);
        printGraph(graph);
    }
    private static void printGraph(int[][] graph){
        for(int i = 0; i< graph.length; i++){
            for(int j = 0;j< graph.length; j++){
                System.out.print(graph[i][j]+" ");
            }
            System.out.println();
        }
    }
    private static int[][] buildGraph(int[][] edges, int n){
        int[][] graph = new int[n][n];
        for(int i = 0; i< edges.length; i++){
            int src = edges[i][0];
            int des = edges[i][1];
            graph[src][des] = 1;
            graph[des][src] = 1;
        }
        return graph;
    }   
}
