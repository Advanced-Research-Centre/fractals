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
      x1=647; y1=670;
      x2=700; y2=670;
      draw(x1,x2,y1,y2,n,0.8);
      x1=1040; y1=670;
      x2=1100; y2=670;
      draw(x1,x2,y1,y2,n,0.9);
      x1=243; y1=670;
      x2=300; y2=670;
      draw(x1,x2,y1,y2,n,1.0);
      
      
    
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,float c )
{
       float x3,y3,x4,y4,x5,y5,x6,y6,x,y;
       int cl=0,c2=0;
       n++;
       //cout<<x2<<"\n";
       x = x2 - x1;
       y = y2 - y1;
      // if(n%2!=0)
       //x3 = x1;
       //y3 = y1-x;
       //x4 = x2;
       //y4 = y2-x;
       x3 = ((x*4.2*c/n * cos(29.85)) - (y*4.2*c/n * sin(29.85))) + x1;
       y3 = ((y*4.2*c/n * cos(29.85)) + (x*4.2*c/n * sin(29.85))) + y1;
       x4 = ((x*4.2*c/n * cos(29.85)) - (y*4.2*c/n * sin(29.85))) + x2;
       y4 = ((y*4.2*c/n * cos(29.85)) + (x*4.2*c/n * sin(29.85))) + y2;
       
       x5 = ((x*sqrt(2)/2 * cos(30.645)) - (y*sqrt(2)/2 * sin(30.645))) + x3;
       y5 = ((y*sqrt(2)/2 * cos(30.645)) + (x*sqrt(2)/2 * sin(30.645))) + y3;
       x6 = ((x*sqrt(2)/2 * cos(30.445)) - (y*sqrt(2)/2 * sin(30.445))) + x3;
       y6 = ((y*sqrt(2)/2 * cos(30.445)) + (x*sqrt(2)/2 * sin(30.445))) + y3;
       
       cl=COLOR(180-n*45,(c-1)*100+n*20,0);
      // c2=COLOR(180-(n+1)*45,(n+1)*20,0);
       setcolor( cl);
       //if(n>3){
       line(x1,y1,x2,y2);
       line(x2,y2,x4,y4);
       line(x4,y4,x3,y3);
       line(x3,y3,x1,y1);
       
       if(n%2==0)
       {line(x1+1,y1+1,x2+1,y2);
       line(x2+1,y2+1,x4+1,y4);
       line(x4+1,y4+1,x3+1,y3);
       line(x3+1,y3+1,x1,y1);}
       //setcolor( (cl+c2)/2);
       //line(x4+1,y4+1,x5+1,y5+1);
      // line(x3+1,y3+1,x5+1,y5+1);
      // line(x3+1,y3+1,x4+1,y4+1);
      // setcolor( cl);
       setfillstyle(1,cl);
       //if(n%2==1)
       if(n<4)floodfill((x4+x1)/2,(y4+y1)/2,cl);
       //if(n<2)floodfill((x3+x4+x5)/3,(y3+y4+y5)/3,COLOR(180,180,180));
       //line((x1+x3)/2,(y1+y3)/2,(x1+x2)/2,(y1+y2)/2);
       //line((x1+x2)/2,(y1+y2)/2,(x3+x2)/2,(y3+y2)/2);
       if(n==9) return;
       //if(n>8) line(x1,y1,x2,y2);
       
       //draw(((x1+x3)/2+x3)/2,((x3+x2)/2+x3)/2,((y1+y3)/2+y3)/2,((y3+y2)/2+y3)/2,n,1);
       draw(x3,x5,y3,y5,n,c);
       draw(x5,x4,y5,y4,n,c);
       draw(x3,x6,y3,y6,n,c);
       draw(x6,x4,y6,y4,n,c);
     
     
}
       
