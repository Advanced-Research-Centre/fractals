    #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<stdio.h>
    #include<stdlib.h>
    #include<windows.h>
    #include<math.h>
int near_(float x, float y)
{
        double d1, d2, d3;
        d1 = (x-1)*(x-1) + y*y;
        d2 = (x+1/2)*(x+1/2) + (y-sqrt(3)/2)*(y-sqrt(3)/2);
        d3 = (x+1/2)*(x+1/2) + (y+sqrt(3)/2)*(y+sqrt(3)/2);
        if((d1>1)&&(d2>1)&&(d3>1))     return 0;
        if(fmin(d1,d2) == fmin(d1,d3)) return 1;
        if(fmin(d1,d2) == fmin(d2,d3)) return 2;
        if(fmin(d1,d3) == fmin(d2,d3)) return 3;
        return 0;
    }
    main()
{
      initwindow(1350,680,"IMAGE 1",0,0);
      float cx,cy,z1x=0,z1y=0,zdum,z,r2;
      int k;
      for(int i=1;i<1350;i++)
      {
      for(int j=1;j<680;j++)
      {
           z1x = i*.007 - 2.8;
           z1y = j*.007 - 2.38;
           for(k=1;k<100;k++)
            {
                r2 = z1x*z1x + z1y*z1y;
                zdum=2*z1x/3+(pow(z1x,2)-pow(z1y,2))/(3*r2*r2);
                z1y=2*z1y/3+(-2*(z1x)*(z1y))/(3*r2*r2);                
                z1x=zdum;
            }
            int b = near_(z1x,z1y);
            switch(b)
            {
                             case 0:
                                  putpixel(i,j,BLACK);
                                  break;
                             case 1:
                                  putpixel(i,j,COLOR(0,b*80,0));
                                  break;
                             case 2:
                                  putpixel(i,j,COLOR(0,0,b*80));
                                  break;
                             case 3:
                                  putpixel(i,j,COLOR(b*80,0,0));
                                  break;
            }
      }
      }
     writeimagefile("Mandelbrot.jpeg",0,0,1350,680);
     getch();
      
}
