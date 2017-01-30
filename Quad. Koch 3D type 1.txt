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
      x1=150; y1=380;
      x2=700; y2=670;
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float x3,y3,x4,y4,x,y,a1,b1,a2,b2,ad,bd;
       float xp1,yp1,xp2,yp2,xp3,yp3;
       n++;
       x = x2 - x1;
       y = y2 - y1;
       x3 = ((x * cos(30.37))   - (y * sin(30.37))) + x1;
       y3 = ((y * cos(30.37))   + (x * sin(30.37))) + y1;
       x4 = ((x * cos(30.37))   - (y * sin(30.37))) + x2;
       y4 = ((y * cos(30.37))   + (x * sin(30.37))) + y2;
    
       //setcolor( COLOR(n*20,n*30,n*10) );
       //if(n>3){
       c=n+c/7+2;
       setcolor(COLOR((y1+x1)/c,10*c,10*c));
       
       line(x1,y1,x2,y2);
       line(x2,y2,x4,y4);
       line(x4,y4,x3,y3);
       line(x3,y3,x1,y1);
       setfillstyle(1,COLOR((y1+x1)/c,10*c,10*c));
       floodfill((x1+x2+x3)/3,(y1+y2+y3)/3,COLOR((x1+y1)/c,10*c,10*c));
       if(n==3) return;

       
       //top left
       a1 = (1*x1+2*x3)/3;
       b1 = (1*y1+2*y3)/3;
       ad = (1*x2+2*x4)/3;
       bd = (1*y2+2*y4)/3;
       a2 = (2*a1+1*ad)/3;
       b2 = (2*b1+1*bd)/3;
       draw(a1,a2,b1,b2,n,8);
       //top
       a1 = a2;
       b1 = b2;
       a2 = (1*a1+1*ad)/2;
       b2 = (1*b1+1*bd)/2;
       draw(a1,a2,b1,b2,n,9);
       //left
       ad = (2*x1+1*x2)/3;
       bd = (2*y1+1*y2)/3;
       a2 = (1*a1+1*ad)/2;
       b2 = (1*b1+1*bd)/2;
       ad = (1*x1+2*x3)/3;
       bd = (1*y1+2*y3)/3;
       a1 = (1*ad+1*x1)/2;
       b1 = (1*bd+1*y1)/2;
       draw(a1,a2,b1,b2,n,8);
       //top right       
       a2 = (1*x2+2*x4)/3;
       b2 = (1*y2+2*y4)/3;
       ad = (1*x1+2*x3)/3;
       bd = (1*y1+2*y3)/3;
       a1 = (1*ad+2*a2)/3;
       b1 = (1*bd+2*b2)/3;
       draw(a1,a2,b1,b2,n,7);
       //right
       ad = (1*x1+2*x2)/3;
       bd = (1*y1+2*y2)/3;
       a1 = (1*a1+1*ad)/2;
       b1 = (1*b1+1*bd)/2;
       ad = (1*x2+2*x4)/3;
       bd = (1*y2+2*y4)/3;
       a2 = (1*ad+1*x2)/2;
       b2 = (1*bd+1*y2)/2;
       draw(a1,a2,b1,b2,n,7);
       //bottom left
       a1 = x1;
       b1 = y1;
       a2 = (2*a1+1*x2)/3;
       b2 = (2*b1+1*y2)/3;
       draw(a1,a2,b1,b2,n,7);
       //bottom right
       a2 = x2;
       b2 = y2;
       a1 = (2*a2+1*x1)/3;
       b1 = (2*b2+1*y1)/3;
       draw(a1,a2,b1,b2,n,7);
       //bottom
       a1 = (2*x1+1*x2)/3;
       b1 = (2*y1+1*y2)/3;      
       a2 = (1*a1+1*x2)/2;
       b2 = (1*b1+1*y2)/2;
       draw(a1,a2,b1,b2,n,7);



               a2 = (1*x2+2*x4)/3;
               b2 = (1*y2+2*y4)/3;
               ad = (1*x1+2*x3)/3;
               bd = (1*y1+2*y3)/3;
               a1 = (1*ad+2*a2)/3;
               b1 = (1*bd+2*b2)/3;
               ad = (1*x1+2*x2)/3;
               bd = (1*y1+2*y2)/3;
               a1 = (1*a1+1*ad)/2;
               b1 = (1*b1+1*bd)/2;
               
               //x = a2 - a1;
               //y = a2 - a1;
               
               xp1=((x/3 * cos(16.76)) - (y/3 * sin(16.76))) + a1;
               yp1=((y/3 * cos(16.76)) + (x/3 * sin(16.76))) + b1;
               
               draw(a1,xp1,b1,yp1,n,11);
              // draw(xp1,a1,yp1,b1,n,1);
              
              //xp2=a1;
              //yp2=b1;
               a2 = (1*x2+2*x4)/3;
               b2 = (1*y2+2*y4)/3;
               ad = (1*x1+2*x3)/3;
               bd = (1*y1+2*y3)/3;
               a1 = (1*ad+2*a2)/3;
               b1 = (1*bd+2*b2)/3;
               
               xp2=((x/3 * cos(16.76))   - (y/3 * sin(16.76))) + a1;
               yp2=((y/3 * cos(16.76))   + (x/3 * sin(16.76))) + b1;
              // draw(xp2,a1,yp2,b1,n,1);
               
               draw(xp2,xp1,yp2,yp1,n,15);
               //xp3=((x/3 * cos(16.8))   - (y/3 * sin(16.8))) + a1;
               //yp3=((y/3 * cos(16.8))   + (x/3 * sin(16.8))) + b1;
               //draw(xp1 & xp2 but reverse)
               

}
       
