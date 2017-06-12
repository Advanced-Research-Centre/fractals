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
      x1=5; y1=100;
      x2=1345; y2=100;
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float x3,y3,x4,y4,x,y;
       n++;
       x=x2-x1;
       setcolor(COLOR(180,180,180));
       rectangle(x1,y1,x2,y1+30);
       setfillstyle(1,COLOR(180,180,180));
       if(n<8) floodfill((x1+x2)/2,y1+10,COLOR(180,180,180));
       
       if(n>6) return;
       draw(x1,x1+x/3,y1+80,y1+80,n,0);
       draw(x1+x*2/3,x2,y1+80,y1+80,n,0);
      //draw(((x1+x3)/2+x3)/2,((x3+x2)/2+x3)/2,((y1+y3)/2+y3)/2,((y3+y2)/2+y3)/2,n,1);
      
    
           
       //line(x1,y1,x2,y2);     
}
       
