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
      x1=100; y1=300;
      x2=900; y2=500;
      floodfill(100,100,COLOR(180,180,180));
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float x3,y3,x4,y4,x5,y5,x,y,d;
       n++;
       x = x2 - x1;
       y = y2 - y1;
    
       x3 = ((x*0.91 * cos(34.64)) - (y*0.91 * sin(34.64))) + x2;
       y3 = ((y*0.91 * cos(34.64)) + (x*0.91 * sin(34.64))) + y2;
       x4 = ((x*0.6 * cos(34.49)) - (y*0.6 * sin(34.49))) + x2;
       y4 = ((y*0.6 * cos(34.49)) + (x*0.6 * sin(34.49))) + y2;
       x5 = ((x*0.8 * cos(34.9)) - (y*0.8 * sin(34.9))) + x2;
       y5 = ((y*0.8 * cos(34.9)) + (x*0.8 * sin(34.9))) + y2;
 
       setcolor( COLOR(25,n*7,0) );
       if(n>13){
       line(x1,y1,x3,y3);
       line(x2,y2,x4,y4);
       line(x2,y2,x5,y5);
       line(x4,y4,x5,y5);
       }
       d=sqrt(pow(x2-x5,2)+pow(y2-y5,2));
       if(d<0.5) return;
    
       draw(x3,x4,y3,y4,n,1);
       draw(x3,x5,y3,y5,n,1);
       draw(x3,x2,y3,y2,n,1);
     
}
       
