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
      x1=50; y1=650;
      x2=1300; y2=650;
      draw(x1,x2,y1,y2,n,1);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float m1x,m2x,m1y,m2y,m3x,m3y,x,y;
       n++;
       
       m1x=x1+(x2-x1)*7/15;
       m1y=y1+(y2-y1)*7/15;
       //
       m2x=x1+(x2-x1)*8/15;
       m2y=y1+(y2-y1)*8/15;
       //
              
       x = (m2x - m1x)*7;
       y = (m2y - m1y)*7;
       m3x = ((x * cos(29.92)) - (y * sin(29.92))) + m1x;
       m3y = ((y * cos(29.92)) + (x * sin(29.92))) + m1y;
       setcolor( COLOR(x1/10,y1/7,40) );
      
       //line(x1,y1,x2,y2);
       if(n>10) return;
       if(n>9) line(x1,y1,x2,y2);
       draw(x1,m1x,y1,m1y,n,1);
       draw(m2x,x2,m2y,y2,n,2);
       //line(x1,y1,x2,y2);
       draw(m1x,m3x,m1y,m3y,n,3);
       draw(m3x,m2x,m3y,m2y,n,4);  
       //line(x1,y1,x2,y2);     
}
       
