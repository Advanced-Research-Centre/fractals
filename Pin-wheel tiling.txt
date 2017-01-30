    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    void draw(float,float,float,float,float,float,int,int);
    main()
{
      initwindow(1350,680,"IMAGE 1",0,0);
      float x1,x2,y1,y2,x3,y3;
      int n=0;
      floodfill(10,10,COLOR(180,180,180));
      x1=100; y1=670;
      x2=1250; y2=670;
      x3=100; y3=y1-(x2-x1)/2;
      draw(x1,x2,x3,y1,y2,y3,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2,float x3, float y1, float y2,float y3,int n,int c )
{
       float x4,y4,x5,y5,x6,y6,x7,y7;
       n++;
       
       x4 = (1*x2+4*x3)/5;
       y4 = (1*y2+4*y3)/5;
       x5 = (3*x2+2*x3)/5;
       y5 = (3*y2+2*y3)/5;
       x6 = (1*x4+1*x1)/2;
       y6 = (1*y4+1*y1)/2;
       x7 = (1*x2+1*x1)/2;
       y7 = (1*y2+1*y1)/2;
       

       setcolor( COLOR(x1/n,(y1+x1)/n,n*12) );
       //if(n>3){
       line(x1,y1,x4,y4);
       line(x4,y4,x7,y7);
       line(x5,y5,x7,y7);
       line(x6,y6,x7,y7);
       if(n>8) return;
       //if(n>8) line(x1,y1,x2,y2);
       
       //draw(((x1+x3)/2+x3)/2,((x3+x2)/2+x3)/2,((y1+y3)/2+y3)/2,((y3+y2)/2+y3)/2,n,1);
      draw(x5,x2,x7,y5,y2,y7,n,1);
      draw(x5,x4,x7,y5,y4,y7,n,1);
      draw(x6,x7,x1,y6,y7,y1,n,1);
      draw(x4,x1,x3,y4,y1,y3,n,1);
      // draw(x1,(x1+x2)/2,y1,(y1+y2)/2,n,2);
       //draw((x1+x2)/2,x2,(y1+y2)/2,y2,n,3);
       
       
       //draw(((x2+x1)/2+x1)/2,((x1+x3)/2+x1)/2,((y2+y1)/2+y1)/2,((y1+y3)/2+y1)/2,n,2);
       //draw(((x3+x2)/2+x2)/2,((x2+x1)/2+x2)/2,((y3+y2)/2+y2)/2,((y2+y1)/2+y2)/2,n,3);
       //if(c!=2)draw((x2+x1)/2,(x3+x2)/2,(y2+y1)/2,(y3+y2)/2,n,2);
       //if(c!=3)draw((x1+x3)/2,(x2+x1)/2,(y1+y3)/2,(y2+y1)/2,n,3);
    
           
       //line(x1,y1,x2,y2);     
}
       
