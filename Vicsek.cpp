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
      x1=350; y1=670;
      x2=1000; y2=670;
      draw(x1,x2,y1,y2,n,1);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float x3,y3,x4,y4,x,y;
       n++;
       x = x2 - x1;
       y = y2 - y1;
       x3 = x1;
       y3 = y1-x;
       x4 = x2;
       y4 = y2-x;
       if(c==1)setcolor( COLOR(0,0,80) );
       else if (c==2) setcolor( COLOR(0,80,0) );
       else if (c==3) setcolor( COLOR(80,0,0) );
       else if (c==4) setcolor( COLOR(80,80,0) );
       else if (c==5) setcolor( COLOR(80,0,80) );
       else if (c==6) setcolor( COLOR(0,80,80) );
       setcolor( COLOR(n*20,n*30,n*10) );
       if(n==6){
       rectangle(x1,y3,x2,y1 );
       setfillstyle(1, COLOR(n*20,n*30,n*10) );
       floodfill(x1+x/2,y3+x/2,COLOR(n*20,n*30,n*10));}
       if(n==7 && c==2)
       putpixel(x1+x/2,y3+x/2,COLOR(0,0,0));
       if(n>7) return;
       //for saltire form       
       draw(x1,x1+x/3,y3+x/3,y3+x/3,n,2);
       draw(x1+x*2/3,x2,y3+x/3,y3+x/3,n,2);
       draw(x1,x1+x/3,y1,y2,n,2);
       draw(x1+x*2/3,x2,y1,y2,n,2);
       //for cross form
       draw(x1+x/3,x1+x*2/3,y3+x*2/3,y3+x*2/3,n,1);
       /*draw(x1+x/3,x1+x*2/3,y3+x/3,y3+x/3,n,2);
       draw(x1,x1+x/3,y3+x*2/3,y3+x*2/3,n,2);
       draw(x1+x*2/3,x2,y3+x*2/3,y3+x*2/3,n,2);
       draw(x1+x/3,x1+x*2/3,y1,y2,n,2);*/
         
}
       
