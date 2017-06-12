#include<graphics.h>
float c[3][2]={{0,0.5},{-0.25,0},{0.25,0}};
float sndt[3][2]={{-0.5,1},{-0.5,0},{0.5,0}};
int i,j;
void ifs(int);
    main()
{
      initwindow(1335,680,"IMAGE 1",0,0);
      ifs(0);
      getch();
}      
    void ifs(int n)
{      
      float t[3][2],tpre[3][2],rcvt[3][2];
      for(i=0;i<3;i++)for(j=0;j<2;j++)rcvt[i][j]=sndt[i][j];
      n++;
      if(n==11) return;
      for(i=0;i<3;i++)for(j=0;j<2;j++)tpre[i][j]=rcvt[i][j];
      for(i=0;i<3;i++){for(j=0;j<2;j++)t[i][j]=tpre[i][j]*0.5+c[0][j];if(i!=0)putpixel((t[i][0]+0.75)*770,(t[i][1]-1.10)*-600,COLOR((t[i][1]-1.10)*-200,180,180));}
      for(i=0;i<3;i++)for(j=0;j<2;j++)sndt[i][j]=t[i][j];
      ifs(n);
      for(i=0;i<3;i++)for(j=0;j<2;j++)tpre[i][j]=rcvt[i][j];
      for(i=0;i<3;i++){for(j=0;j<2;j++)t[i][j]=tpre[i][j]*0.5+c[1][j];if(i!=0)putpixel((t[i][0]+0.75)*770,(t[i][1]-1.10)*-600,COLOR((t[i][1]-1.10)*-200,180,180));}
      for(i=0;i<3;i++)for(j=0;j<2;j++)sndt[i][j]=t[i][j];
      ifs(n);
      for(i=0;i<3;i++)for(j=0;j<2;j++)tpre[i][j]=rcvt[i][j];
      for(i=0;i<3;i++){for(j=0;j<2;j++)t[i][j]=tpre[i][j]*0.5+c[2][j];if(i!=0)putpixel((t[i][0]+0.75)*770,(t[i][1]-1.10)*-600,COLOR((t[i][1]-1.10)*-200,180,180));}
      for(i=0;i<3;i++)for(j=0;j<2;j++)sndt[i][j]=t[i][j];
      ifs(n);      
}
