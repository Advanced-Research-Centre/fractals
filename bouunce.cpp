    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    void draw(float,float,int,int);

    main()
{
      initwindow(1350,680,"IMAGE 1",0,0);
      float x1,x2,y1,y2;
      int n=0;
      x1=10; y1=340;
      draw(x1,y1,0,0);
}
    void draw(float x1,float y1,int g1,int g2 )
{
       float arr[4][65];
       for(int i=0;i<65;i++)
        {
               arr[0][i]=x1+i*15;
               arr[1][i]=y1;
               arr[2][i]=i;
               arr[3][i]=0;
               }
       float y2=y1,y3=y1,y4=y1;
       int c;
       for(;;)
       {
              for(c=0;c<65;c++)
              {
              if(c!=0)line(arr[0][c],arr[1][c],arr[0][c-1],arr[1][c-1]);
              circle(arr[0][c],arr[1][c],5);
              if(arr[3][c]==1)arr[1][c]+=arr[2][c];
              else if(arr[3][c]==0)arr[1][c]-=arr[2][c];
              if(arr[1][c]>670 && arr[3][c]==1)arr[3][c]=0;//arr[0][c]+=arr[2][c];}
              else if(arr[1][c]<10 && arr[3][c]==0)arr[3][c]=1;//arr[0][c]+=arr[2][c];}
              }
       delay(6);
       if(arr[0][17]>680)break;
       cleardevice();
       }
       getch();       
}
