#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<math.h>
main()
{
      double cx, cy, ix, iy, temp, dist = 0, min,dm,m, c;
      int col, x, y, i;
      initwindow(1350, 680, "MandleBrot");
      for(y = 0; y < 680; y++)
      {            
            for(x = 0; x < 1350; x++)
            {
                  //ix = x*0.0005 - 0.5;
                  //iy = y*0.0005 - 0.9;
                  ix = x*0.0033 - 2.2;
                  iy = y*0.0033 - 1.05;

                  cx = cy = dist = 0;
                  for(i = 0; i < 500 && dist < 2; i++)
                  {
                        temp = ix + ((cx*cx) - (cy*cy));
                        cy = iy + 2*cx*cy;
                        cx = temp;
                        dm=10000000;
                        for(min=0;min<3;min=min+0.2)
                        {dist = pow(cx+min,2) + pow(cy,2);
                        if(dm>dist)dm=dist;
                        }
                        dist=dm;
                  }
                  if(i<400)putpixel(x, y,pow(i*1.5,dist));
                  //if(i<400)putpixel(x, y, COLOR (dist*671,60,i/3));
                  //putpixel(x,y,COLOR(130-i*0.05,dist*i*1000,dist*453));
            }
      }
      writeimagefile("Mandlebrot orbit trap.jpg",0,0,1350,680);
      getch();
}
                                          
