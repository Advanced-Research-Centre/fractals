    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
    void draw(float,float,float,float,int,float);
    void fern(float,float,float,float,int,float);
    main()
{
      initwindow(130,130,"IMAGE 1",0,0);
      float x1,x2,y1,y2;
      int n=0;
      x1=25; y1=62;
      x2=100; y2=62;
      draw(x1,x2,y1,y2,n,0);
}
    void draw(float x1,float x2, float y1, float y2,int d,float s )
{
       float x3,y3,x4,y4,x5,y5,x6,y6,x0,y0,x,y;
       for(;;)
       {
       for(float i=34.22;i<34.53;i=i+0.05)      
       {
       s=i;
       x0=(x1+x2)/2;
       y0=(y1+y2)/2;
       fern(x0,x1,y0,y1,0,s);
       fern(x0,x2,y0,y2,0,s);       
       x = x0 - x1;
       y = y0 - y1;
       x3 = ((x * cos(30.35)) - (y * sin(30.35))) + x1;
       y3 = ((y * cos(30.35)) + (x * sin(30.35))) + y1;
       fern(x0,x3,y0,y3,0,s);       
       x = x0 - x1;
       y = y0 - y1;
       x5 = ((x * cos(19.9)) - (y * sin(19.9))) + x1;
       y5 = ((y * cos(19.9)) + (x * sin(19.9))) + y1;
       fern(x0,x5,y0,y5,0,s);       
       x = x2 - x0;
       y = y2 - y0;
       x4 = ((x * cos(30.35)) - (y * sin(30.35))) + x0;
       y4 = ((y * cos(30.35)) + (x * sin(30.35))) + y0;
       fern(x0,x4,y0,y4,0,s);     
       x = x2 - x0;
       y = y2 - y0;
       x6 = ((x * cos(19.9)) - (y * sin(19.9))) + x0;
       y6 = ((y * cos(19.9)) + (x * sin(19.9))) + y0;
       fern(x0,x6,y0,y6,0,s);
       delay(200);
       cleardevice();
       }
       for(float i=34.43;i>34.28;i=i-0.05)
       {
       x0=(x1+x2)/2;
       y0=(y1+y2)/2;
       fern(x0,x1,y0,y1,0,s);
       fern(x0,x2,y0,y2,0,s);
       x = x0 - x1;
       y = y0 - y1;
       x3 = ((x * cos(30.35)) - (y * sin(30.35))) + x1;
       y3 = ((y * cos(30.35)) + (x * sin(30.35))) + y1;
       fern(x0,x3,y0,y3,0,s);
       x = x2 - x0;
       y = y2 - y0;
       x4 = ((x * cos(30.35)) - (y * sin(30.35))) + x0;
       y4 = ((y * cos(30.35)) + (x * sin(30.35))) + y0;
       fern(x0,x4,y0,y4,0,s);
       x = x0 - x1;
       y = y0 - y1;
       x5 = ((x * cos(19.9)) - (y * sin(19.9))) + x1;
       y5 = ((y * cos(19.9)) + (x * sin(19.9))) + y1;
       fern(x0,x5,y0,y5,0,s);
       x = x2 - x0;
       y = y2 - y0;
       x6 = ((x * cos(19.9)) - (y * sin(19.9))) + x0;
       y6 = ((y * cos(19.9)) + (x * sin(19.9))) + y0;
       fern(x0,x6,y0,y6,0,s);
       delay(200);
       cleardevice();
       }
       }      
}
    void fern(float x1,float x2, float y1, float y2,int n,float c )
{
       float x3,y3,x4,y4,x5,y5,x,y,dist;
       n++;
       x = x2 - x1;
       y = y2 - y1;
       x3 = ((x*0.88 * cos(c)) - (y*0.88 * sin(c))) + x2;
       y3 = ((y*0.88 * cos(c)) + (x*0.88 * sin(c))) + y2;
       x5 = ((x*0.52 * cos(c+c/80)) - (y*0.52 * sin(c+c/80))) + x2;
       y5 = ((y*0.52 * cos(c+c/80)) + (x*0.52 * sin(c+c/80))) + y2;
       setcolor(COLOR(25,n*7,0));
       line(x1,y1,x3,y3);
       dist=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
       if((dist)<2) return;
       fern(x3,x5,y3,y5,n,c);
       fern(x3,x2,y3,y2,n,c);
}
       
