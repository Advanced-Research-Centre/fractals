    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    void draw(float,float,float,float,int,int);
    main()
{
      initwindow(1350,680,"IMAGE 1",0,0);
      float x1,x2,y1,y2;
      int n=0;
      x1=0; y1=340;
      x2=1350; y2=340;
      draw(x1,x2,y1,y2,n,1);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float m1x,m2x,m1y,m2y,m3x,m3y,m4x,m4y,x,y;
       n++;
       
       m1x=x1+(x2-x1)/3;
       m1y=y1+(y2-y1)/3;
       //
       m2x=x1+(x2-x1)*2/3;
       m2y=y1+(y2-y1)*2/3;
       //
              
       x = m2x - m1x;
       y = m2y - m1y;
       m3x = ((x * cos(30.35)) - (y * sin(30.35))) + m1x;
       m3y = ((y * cos(30.35)) + (x * sin(30.35))) + m1y;
       m4x = ((x * cos(19.9)) - (y * sin(19.9))) + m1x;
       m4y = ((y * cos(19.9)) + (x * sin(19.9))) + m1y;
       if(c==1)setcolor( COLOR(0,0,80) );
       else if (c==2) setcolor( COLOR(0,80,0) );
       else if (c==3) setcolor( COLOR(80,0,0) );
       else if (c==4) setcolor( COLOR(80,80,0) );
       else if (c==5) setcolor( COLOR(80,0,80) );
       else if (c==6) setcolor( COLOR(0,80,80) );
       //line(x1,y1,x2,y2);
       if(n>9) return;
       if(n>8) line(x1,y1,x2,y2);
       draw(x1,m1x,y1,m1y,n,1);
       draw(m2x,x2,m2y,y2,n,2);
       //line(x1,y1,x2,y2);
       draw(m1x,m3x,m1y,m3y,n,3);
       draw(m3x,m2x,m3y,m2y,n,4);
       draw(m1x,m4x,m1y,m4y,n,5);
       draw(m4x,m2x,m4y,m2y,n,6);    
       //line(x1,y1,x2,y2);     
}
       
