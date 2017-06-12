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
      draw(x1,x2,y1,y2,n,4);
      writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
      getch();
}
    void draw(float x1,float x2, float y1, float y2,int n,int c )
{
       float x3,y3,x4,y4,x,y;
       n++;
       //cout<<x2<<"\n";
       x = x2 - x1;
       y = y2 - y1;
      // if(n%2!=0)
       x3 = x1;
       y3 = y1-x;
       x4 = x2;
       y4 = y2-x;
      /* else
       {x3 = ((x * cos(19.9)) - (y * sin(19.9))) + x1;
       y3 = ((y * cos(19.9)) + (x * sin(19.9))) + y1;}
       */
       if(c==1)setcolor( COLOR(0,0,80) );
       else if (c==2) setcolor( COLOR(0,80,0) );
       else if (c==3) setcolor( COLOR(80,0,0) );
       else if (c==4) setcolor( COLOR(80,80,0) );
       else if (c==5) setcolor( COLOR(80,0,80) );
       else if (c==6) setcolor( COLOR(0,80,80) );
       //setcolor( COLOR(n*20,n*30,n*10) );
       //if(n>3){
       line(x1,y1,x2,y2);
       line(x2,y2,x4,y4);
       line(x4,y4,x3,y3);
       line(x3,y3,x1,y1);
       //line((x1+x3)/2,(y1+y3)/2,(x1+x2)/2,(y1+y2)/2);
       //line((x1+x2)/2,(y1+y2)/2,(x3+x2)/2,(y3+y2)/2);
       if(n>6) return;
       //if(n>8) line(x1,y1,x2,y2);
       
       //draw(((x1+x3)/2+x3)/2,((x3+x2)/2+x3)/2,((y1+y3)/2+y3)/2,((y3+y2)/2+y3)/2,n,1);
       draw(x1,x1+x/3,y3+x/3,y3+x/3,n,1);
       draw(x1+x*2/3,x2,y3+x/3,y3+x/3,n,2);
       draw(x1,x1+x/3,y1,y2,n,1);
       draw(x1+x*2/3,x2,y1,y2,n,2);
       draw(x1+x/3,x1+x*2/3,y3+x/3,y3+x/3,n,3);
       draw(x1,x1+x/3,y3+x*2/3,y3+x*2/3,n,4);
       draw(x1+x*2/3,x2,y3+x*2/3,y3+x*2/3,n,4);
       draw(x1+x/3,x1+x*2/3,y1,y2,n,3);
       //draw(x1,(x1+x2)/2,y1,(y1+y2)/2,n,2);
       //draw((x1+x2)/2,x2,(y1+y2)/2,y2,n,3);
       
       
       //draw(((x2+x1)/2+x1)/2,((x1+x3)/2+x1)/2,((y2+y1)/2+y1)/2,((y1+y3)/2+y1)/2,n,2);
       //draw(((x3+x2)/2+x2)/2,((x2+x1)/2+x2)/2,((y3+y2)/2+y2)/2,((y2+y1)/2+y2)/2,n,3);
       //if(c!=2)draw((x2+x1)/2,(x3+x2)/2,(y2+y1)/2,(y3+y2)/2,n,2);
       //if(c!=3)draw((x1+x3)/2,(x2+x1)/2,(y1+y3)/2,(y2+y1)/2,n,3);
    
           
       //line(x1,y1,x2,y2);     
}
       
