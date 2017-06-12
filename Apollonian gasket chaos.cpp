#include<graphics.h>
#include<conio.h>
#include<math.h>
main()
{
      initwindow(1000, 750, "Apollonian");
      double x0 = 0, y0 = 0, f1x, f1y, x1, y1, r = sqrt(3), temp;
      for(int i = 0; i < 1000000; i++)
      {
           temp = 3 * (1 + r - x0) / (pow(1 + r - x0,2.0) + y0*y0) - (1 + r) / (2+r);
           y0 = 3 * y0 / (pow(1 + r - x0,2.0) + y0*y0);
           x0 = temp;
           f1x = x0 /(x0*x0 + y0*y0);
           f1y = -y0 /(x0*x0 + y0*y0);
           switch(rand()%3)
           {
                     case 0:
                          x1 = x0;
                          y1 = y0;
                          break;
                     case 1:
                          x1 = -f1x/2 - f1y*r/2;
                          y1 = f1x * r / 2 - f1y / 2;
                          break;
                     case 2:
                          x1 = -f1x / 2 + f1y * r / 2;
                          y1 = -f1x * r / 2 - f1y / 2;
                          break;
		    }
		x0 = x1;
		y0 = y1;
		putpixel(x0*80 + 500, y0*80 + 325,COLOR(180,i/100000,180));
    }
    writeimagefile("Apollonian.jpg", 0, 0, 1000, 750);
    getch();
}
		
