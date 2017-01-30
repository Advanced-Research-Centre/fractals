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
      //floodfill(100,100,COLOR(180,180,180));
      x1=150; y1=570;
      x2=1200; y2=570;
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       
       float x3,y3,x4,y4,x5,y5,x6,y6,x,y,d;
       n++;
       cout<<x2<<"\n";
       x = x2 - x1;
       y = y2 - y1;
       
       d=sqrt(pow(x,2)+pow(y,2));
       
       x3 = (2*x1+1*x2)/3;
       y3 = (2*y1+1*y2)/3;
       x4 = (1*x1+2*x2)/3;
       y4 = (1*y1+2*y2)/3;
       x5 = ((x/3 * cos(29.85)) - (y/3 * sin(29.85))) + x3;
       y5 = ((y/3 * cos(29.85)) + (x/3 * sin(29.85))) + y3;
       x6 = ((x/3 * cos(29.85)) - (y/3 * sin(29.85))) + x4;
       y6 = ((y/3 * cos(29.85)) + (x/3 * sin(29.85))) + y4;
      /* else
       {x3 = ((x * cos(19.9)) - (y * sin(19.9))) + x1;
       y3 = ((y * cos(19.9)) + (x * sin(19.9))) + y1;}*/
       

       setcolor( COLOR(x1/7,y1/4,x1/7) );
       if(n==8){
       line(x1,y1,x3,y3);
       line(x3,y3,x5,y5);
       line(x5,y5,x6,y6);
       line(x6,y6,x4,y4);
       line(x4,y4,x2,y2);}
       if(n==8) return;
       //if(n>8) line(x1,y1,x2,y2);
       
       //draw(((x1+x3)/2+x3)/2,((x3+x2)/2+x3)/2,((y1+y3)/2+y3)/2,((y3+y2)/2+y3)/2,n,1);
       draw(x1,x3,y1,y3,n,1);
       draw(x3,x5,y3,y5,n,2);
       draw(x5,x6,y5,y6,n,2);
       draw(x6,x4,y6,y4,n,2);
       draw(x4,x2,y4,y2,n,2);
       //draw(x1,(x1+x2)/2,y1,(y1+y2)/2,n,2);
       //draw((x1+x2)/2,x2,(y1+y2)/2,y2,n,3);
       
   
}
       
