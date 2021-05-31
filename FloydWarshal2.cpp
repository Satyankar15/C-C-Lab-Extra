#include <stdio.h>

#define INF 999

#define nV 4
void printMatrix(int matrix[][nV]) {
  for (int i = 0; i < nV; i++) {
    for (int j = 0; j < nV; j++) {
      if (matrix[i][j] == INF)
        printf("%4s", "INF");
      else
        printf("%4d", matrix[i][j]);
    }
    printf("\n");
  }
}

void floydWarshall(int graph[][nV]) {
  int matrix[nV][nV], i, j, k;

  for (i = 0; i < nV; i++)
    for (j = 0; j < nV; j++)
      matrix[i][j] = graph[i][j];

  for (k = 0; k < nV; k++) {
    for (i = 0; i < nV; i++) {
      for (j = 0; j < nV; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
  printMatrix(matrix);
}



int main() {
	int graph[nV][nV];
	for(int i=0;i<nV;i++)
    {
    	printf("Enter for %d row\n",i+1);
    	for(int j=0;j<nV;j++)
				scanf("%d",&graph[i][j]);
	}
	printf("Input Graph\n");
	printMatrix(graph);
	printf("\n\n");
	printf("Output Graph\n");
  floydWarshall(graph);
}
