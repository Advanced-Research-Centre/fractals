    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    void draw(float,float,float,float,int,float);
    main()
{
      initwindow(1350,680,"IMAGE 1",0,0);
      float x1,x2,y1,y2;
      int n=0;
      x1=150; y1=40;
      x2=700; y2=40;
      
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,float c )
{
       float x3,y3,x4,y4,x5,y5,x6,y6,x,y,d;
       n++;
       c=(1+sqrt(5))/2-1;
       x = x2 - x1;
       y = y2 - y1;
       x3 = ((x * cos(20.420)) - (y * sin(20.420))) + x1;
       y3 = ((y * cos(20.420)) + (x * sin(20.420))) + y1;
       x4 = ((x * cos(20.420)) - (y * sin(20.420))) + x2;
       y4 = ((y * cos(20.420)) + (x * sin(20.420))) + y2;
       x5 = ((x*c * cos(25.133)) - (y*c * sin(25.133))) + x2;
       y5 = ((y*c * cos(25.133)) + (x*c * sin(25.133))) + y2;
       x6 = ((x*c * cos(20.420)) - (y*c * sin(20.420))) + x5;
       y6 = ((y*c * cos(20.420)) + (x*c * sin(20.420))) + y5;

 
       setcolor( COLOR(n*20,n*30,50) );
       
       line(x1,y1,x2,y2);
       line(x2,y2,x4,y4);
       line(x3,y3,x4,y4);
       line(x1,y1,x3,y3);
       d=sqrt(pow(x,2)+pow(y,2));
       setcolor( COLOR(180,180,180) );
       for(int k=d;k>0;k=k-3)
       {
       if(n%2!=0) arc(x4,y4,n*90,(n-3)*90,k);
       else arc(x4,y4,(n+2)*90,(n-1)*90,k);
       }
       //if(n%2!=0)circle(x4,y4,d);
       //else circle(x4,y4,d);

       
       if(n==14) return;
       //circle(x4,y4,x);
       draw(x5,x6,y5,y6,n,1);
       //draw(x4,x6,y4,y6,n,1);
      // draw(x3,x5,y3,y5,n,1);
      // draw(x3,x2,y3,y2,n,1);
     
}
       
