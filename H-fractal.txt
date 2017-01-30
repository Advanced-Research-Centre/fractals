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
      x1=350; y1=340;
      x2=1000; y2=340;
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float x3,y3,x4,y4,x5,y5,x6,y6,x,y;
       n++;
       cout<<x2<<"\n";
       x = x2 - x1;
       y = y2 - y1;
      /* if(n%2!=0)
       x3 = ((x * cos(30.35)) - (y * sin(30.35))) + x1;
       y3 = ((y * cos(30.35)) + (x * sin(30.35))) + y1;
       else*/
       x3 = ((x*0.353 * cos(29.85))   - (y*0.353 * sin(29.85))) + x1;
       y3 = ((y*0.353 * cos(29.85))   + (x*0.353 * sin(29.85))) + y1;
       x4 = ((x*0.353 * cos(29.846))  - (y*0.353 * sin(29.846))) + x2;
       y4 = ((y*0.353 * cos(29.846))  + (x*0.353 * sin(29.846))) + y2;
       x5 = ((x*0.353 * cos(20.415))  - (y*0.353 * sin(20.415))) + x1;
       y5 = ((y*0.353 * cos(20.415))  + (x*0.353 * sin(20.415))) + y1;
       x6 = ((x*0.353 * cos(20.4205)) - (y*0.353 * sin(20.4205))) + x2;
       y6 = ((y*0.353 * cos(20.4205)) + (x*0.353 * sin(20.4205))) + y2;

 
       setcolor( COLOR(n*20,n*30,50) );
       //if(n>5){
       if(n==1)line(x1,y1,x2,y2);
       line(x5,y5,x3,y3);
       line(x6,y6,x4,y4);
      
       //line(x1,y1,x5,y5);
       //line(x2,y2,x6,y6);
       //
       //line(x3,y3,x4,y4);
       
       if(n==8) return;
    
       draw(x3,x5,y3,y5,n,1);
       draw(x4,x6,y4,y6,n,1);
      // draw(x3,x5,y3,y5,n,1);
      // draw(x3,x2,y3,y2,n,1);
     
}
       
