//深度优先遍历
#include <stdio.h>
int main()
{
    typedef int Boolean;
    Boolean visited[MAX];//访问标志数组；
    void DFS(MGraph G,int i)
    {
        int j;
        visited[i]=TRUE;
        printf("%c",G.vexs[i]);//打印顶点
        for(j=0;j<G.numVertexes;j++)
            if(G.arc[i][j]==1&&!visited[j])
               DFS(G,j);//对访问节点递归操作
    }
    //邻接顶点遍历操作
    void DFSraverse(MGraph G)
    {
        int i;
        for(i=0;i<G,numVertexes;i++)
            visited[i]=FALSE;//初始所有顶点未访问
        for(i=0;i<G.numVertexes;i++)
        if(!visited[i])
        DFS(G,i); 
    }
}

