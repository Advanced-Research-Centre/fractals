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
      floodfill(100,100,COLOR(180,180,180));
      x1=110; y1=340;
      x2=1000; y2=340;
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       
       float x3,y3,x4,y4,x,y;
       n++;

       x = x2 - x1;
       y = y2 - y1;
      // if(n%2!=0)
       x3 = ((x/1.73205 * cos(19.383)) - (y/1.73205 * sin(19.383))) + x1;
       y3 = ((y/1.73205 * cos(19.383)) + (x/1.73205 * sin(19.383))) + y1;
       x4 = ((x/1.73205 * cos(28.79)) - (y/1.73205 * sin(28.79))) + x2;
       y4 = ((y/1.73205 * cos(28.79)) + (x/1.73205 * sin(28.79))) + y2;
      /* else
       {x3 = ((x * cos(19.9)) - (y * sin(19.9))) + x1;
       y3 = ((y * cos(19.9)) + (x * sin(19.9))) + y1;}*/
       

       setcolor( COLOR(x1/7,y1/4,x1/7) );
       if(n==13){
       line(x1,y1,x3,y3);
       line(x3,y3,x4,y4);
       line(x4,y4,x2,y2);}
       if(n==13) return;
       //if(n>8) line(x1,y1,x2,y2);
       
       //draw(((x1+x3)/2+x3)/2,((x3+x2)/2+x3)/2,((y1+y3)/2+y3)/2,((y3+y2)/2+y3)/2,n,1);
       draw(x1,x3,y1,y3,n,10);
       draw(x3,x4,y3,y4,n,10);
       draw(x2,x4,y2,y4,n,2);
       //draw(x1,(x1+x2)/2,y1,(y1+y2)/2,n,2);
       //draw((x1+x2)/2,x2,(y1+y2)/2,y2,n,3);
       
   
}
       
