    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    void draw(float,float,float,float,int,int);
    void spiral(float,float,float,float,int,int);
    main()
{
      initwindow(1350,680,"IMAGE 1",0,0);
      float x1,x2,y1,y2;
      int n=0;
      x1=400; y1=340;
      x2=1050; y2=340;
      draw(x1,x2,y1,y2,n,0);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int d,int s )
{
       float x3,y3,x4,y4,x5,y5,x6,y6,x0,y0,x,y;
       d++;
       if(d==5) return;
       //if(s==3) return;
       x0=(x1+x2)/2;
       y0=(y1+y2)/2;
       spiral(x1,x0,y1,y0,d,s);
       spiral(x2,x0,y2,y0,d,s);
       
       x = x0 - x1;
       y = y0 - y1;
       x3 = ((x * cos(30.35)) - (y * sin(30.35))) + x1;
       y3 = ((y * cos(30.35)) + (x * sin(30.35))) + y1;
       spiral(x3,x0,y3,y0,d,s);
       
       x = x2 - x0;
       y = y2 - y0;
       x4 = ((x * cos(30.35)) - (y * sin(30.35))) + x0;
       y4 = ((y * cos(30.35)) + (x * sin(30.35))) + y0;
       spiral(x4,x0,y4,y0,d,s);
       
       x = x0 - x1;
       y = y0 - y1;
       x5 = ((x * cos(19.9)) - (y * sin(19.9))) + x1;
       y5 = ((y * cos(19.9)) + (x * sin(19.9))) + y1;
       spiral(x5,x0,y5,y0,d,s);
       
       x = x2 - x0;
       y = y2 - y0;
       x6 = ((x * cos(19.9)) - (y * sin(19.9))) + x0;
       y6 = ((y * cos(19.9)) + (x * sin(19.9))) + y0;
       spiral(x6,x0,y6,y0,d,s);
          
}
     void spiral(float xp1,float xp2, float yp1, float yp2,int d,int s )
{
      float xp3,yp3,x,y,dist;
      s++;
      //if(d==3) return;
      //dist=sqrt(pow(xp1-xp2,2)+pow(yp1+yp2,2));
       if(s==20) return;
       x = (xp2 - xp1)*0.35;
       y = (yp2 - yp1)*0.35;
       xp3 = ((x * cos(30.74)) - (y * sin(30.74))) + xp1;
       yp3 = ((y * cos(30.74)) + (x * sin(30.74))) + yp1;
       
       setcolor( COLOR((d+s)*5,s*10,d*35) );
       
       if(d>2){
       line(xp1,yp1,xp3,yp3);
       line(xp3,yp3,xp2,yp2);}
       draw(xp1,xp3,yp1,yp3,d,s);
       spiral(xp3,xp2,yp3,yp2,d,s);
       
       }
