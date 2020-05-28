#include "Graph_Path.h"

voidCreateGraph(AMGraph &G){
    int i, j, k;
    char v1, v2;
    int w;
    cout << "请输入顶点个数和弧的个数: ";
    cin >> G.vexnum >> G.arcnum;
    cout << "请输入顶点信息:" << endl;
    for (i = 0; i < G.vexnum; i++)   
    {
        cin >> G.Vexs[i];   
    }
    for (i = 0; i < G.vexnum; i++)    
    {
        for (j = 0; j < G.vexnum; j++)           
        {
            G.Arcs[i][j] = MAXINT;
        }            
    }
    cout << "请输入每条弧的端点和权值" << endl;
    for (k = 0; k < G.arcnum; k++)    
    {                    
        cin >> v1 >> v2 >> w;
        i = LocateVex(G, v1);
        j = LocateVex(G, v2);
        G.Arcs[i][j] = w;
    }
}

intLocateVex(AMGraph G, char v1)
{
         int i;
         for (i = 0; i < G.vexnum; i++)    
    {

                    if (v1 == G.Vexs[i])

                   return i;

            
    }

         return 0;
}

voidPrint(AMGraph G)

{

         int i, j, k = 0;

         for (i = 0; i < G.vexnum; i++)

            for (j = 0; j < G.vexnum; j++)

           
    {

                           if (G.Arcs[i][j] == MAXINT)

                          cout << "∞"
                                << " ";

                           else

                                      cout
            << G.Arcs[i][j] << " ";

                           k++;

                           if (k % G.vexnum == 0)

                          cout << endl;

                   
    }
}

voidPath(AMGraph G, char v1, char v2)

{

         int m, n;

         int i, j;

         int flag = 0;

         m = LocateVex(G, v1);

         n = LocateVex(G, v2);

         for (i = 0; i < G.vexnum; i++)

    
    {

                    if (G.Arcs[m][i] != MAXINT)

                   flag = 1;

            
    }

         if (flag == 0)

            cout << "无路径可以到达!" << endl;

         if (m == n)

    
    {

                    cout << "起点和终点都是自身!" << endl;

            
    }

         else

                    for (i = 0; i < G.vexnum; i++)

           
    {

                           if (G.Arcs[m][i] != MAXINT)

                  
        {

                                      if (i == n)

                         
            {

                                                 for (j = 1; j < k; j++)

                                
                {

                                                            cout << path[j] << "";

                                                    
                }

                                                 cout << v2 << endl;

                                         
            }

                                     

                          else

                                         
            {

                                                 path[k] = G.Vexs[i];

                                                 k++;

                                                 Path(G, G.Vexs[i], v2);

                                                 k--;

                                         
            }

                              
        }

                   
    }
}
